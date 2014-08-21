#Design an algorithm to find all pairs of integers within an array which sum to a specified value

def sumFinder(array, desiredValue):
    hashTable = {}
    resultArray = []
    for int in array:
        key = int
        value = hash(int)
        hashTable[key] = value
    for int in array:
        if desiredValue - int in hashTable:
            resultArray.append([int, desiredValue - int])
    return resultArray

array = [1,2,3,4,6,7,9,10]
desiredValue = 11

print sumFinder(array, desiredValue)
