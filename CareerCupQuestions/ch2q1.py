#Change array1[a1, a2, ... an] and array2[b1, b2, ... bn] to array[a1, b1, a2, b2, ... an, bn]

def arraySmash(arrayA, arrayB):
    combinedArray = []
    for i in xrange(len(arrayA)):
        combinedArray.append(arrayA[i])
        combinedArray.append(arrayB[i])
    return combinedArray
