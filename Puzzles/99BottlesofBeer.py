counter = 99

while counter >= 0:
    if counter == 0:
        print str(counter) + " bottle of beer on the wall \n"
        counter -= 1
    elif counter == 1:
        print str(counter) + " bottle of beer on the wall \n"
        print str(counter) + " bottler of beer \n"
        print "Take one down, pass it around \n"
        counter -= 1
    else:
        print str(counter) + " bottles of beer on the wall \n "
        print str(counter) + " bottles of beer \n"
        print "Take one down, pass it around \n"
        counter -= 1

