#Function that returns largest sum in the continuous sequence in array

def largestSequentialSum(array):
    size = len(array)
    largestSum = 0
    for i in xrange(size):
        for j in range(i, size):
            sequenceSum = sum(array[i:j+1])
            if sequenceSum > largestSum:
                largestSum = sequenceSum
    return largestSum

array = [2, -8, 3, -2, 4, -10]

print largestSequentialSum(array)
