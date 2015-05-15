booleanList = []
primeList = []
for x in range (0, 2000000):
    booleanList.append(True)

for i in range (2, 2000000):
    if booleanList[i]:
        j = i * i
        while j < 2000000:
            booleanList[j] = False
            j += i
        primeList.append(i)

print sum(primeList)

print primeList[:20]
