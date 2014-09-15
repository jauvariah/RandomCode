import MySQLdb
import re
import MonthDelta

#Function that grabs the domain from an address
def obtainDomain(address):
    domain = re.search("@.*", address).group()
    return domain

db = MySQLdb.connect(host = "localhost", user = "testuser", passwd = "password", db = "testdb")
#Got the database connection
cur = db.cursor()

#Create domain table if it does not exist
cur.execute("""IF NOT EXISTS (SELECT 1 FROM domain)
             BEGIN
                CREATE TABLE domain
               (
               domain VARCHAR(255),
               domain_count INTEGER,
               date DATE
               )
             END""")

#Create a staging table
cur.execute("""CREATE TABLE staging_table
               (
               domain VARCHAR(255),
               domain_count INTEGER,
               date DATE
               )""")

#Running through the mailing table
cur.execute("SELECT addr FROM mailing")
for row in cur.fetchall():
    address = row[0]
    domain = obtainDomain(address)

    #If staging table does not contain this domain, add row to staging table
    cur.execute("""IF NOT EXISTS (SELECT 1 FROM staging_table WHERE domain = %s)
                   BEGIN
                     INSERT INTO staging_table VALUES(%s, 0, CURDATE())
                   END""" % (domain, domain))

    #Count increments in staging table
    currentCount = cur.execute("SELECT domain_count FROM staging_table WHERE domain = '%s'" % domain)
    updatedCount = currentCount + 1
    cur.execute("""UPDATE domain
                   SET domain_count = %s, date = CURDATE()
                   WHERE domain = %s""" % (updatedCount, domain))

#Appending staging table to domain table
cur.execute("INSERT INTO domain (domain, domain_count, date) SELECT (domain, domain_count, date) FROM staging_table")

#Get the top 50 domains to date by count
cur.execute("SELECT * FROM staging_table ORDER BY domain_count DESC LIMIT 50")

#Multidimensional list with each element being [domain, count, growth]
output = []

#Get growth rate
for row in cur.fetchall():
  date = row[2]
  lastMonth = date + MonthDelta(-1)
  lastCount = cur.execute("SELECT domain_count FROM domain WHERE date = %d" % lastMonth)
  growth = (row[1] - lastCount) / lastCount
  output.append([row[0], row[1], growth])

#Sort Multidimensional list by growth
sorted(output, key=lambda l:l[2], reverse=True)

#Print the output
for item in output:
  print "Domain Name: " + item[0] + ", Current Count: " + item[1] + ", Growth Rate: " + item[2]
