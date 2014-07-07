array = [3,6,2,7,4,9,2,1]

def findMaxInt(intArray):
    maxInt = intArray[0]
    for element in intArray:
        if element > maxInt:
            maxInt = element
    return maxInt

print findMaxInt(array)
