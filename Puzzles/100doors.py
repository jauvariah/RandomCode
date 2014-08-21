def binaryFlip(binary):
    if binary == 0:
        return 1
    elif binary == 1:
        return 0

doorsArray = []

for i in range (0, 100):
    doorsArray.append(0)

for i in range (1, 101):
    j = i
    while j <= 100:
        print j
        doorsArray[j-1] = binaryFlip(doorsArray[j-1])
        j += j
        print doorsArray

for i in range(0, 100):
    if doorsArray[i] == 1:
        print i
