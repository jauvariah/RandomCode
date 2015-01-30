import copy
import itertools

generation = [9, 10, 21, 20, 7, 11, 4, 15, 7, 7, 14, 5, 20, 6, 29, 8, 11, 19, 18, 22, 29, 14, 27, 17, 6, 22, 12, 18, 18, 30]
overhead = [21, 16, 19, 26, 26, 7, 1, 8, 17, 14, 15, 25, 20, 3, 24, 5, 28, 9, 2, 14, 9, 25, 15, 13, 15, 9, 6, 20, 27, 22]
budget = 2912

maxSize = 0
global totalTime


for L in range(0,len(generation)+1):

    for subset in itertools.combinations(generation, L):

        #Getting the total time for a given subset
        generationTime = sum(subset)

        overheadTime = 0
        for i in range (0, len(subset)-1):
            overheadTime = overheadTime + overhead[i] * (len(subset)-1)

        totalTime = generationTime + overheadTime

        #If there's an n-sized one subset that has less than budgeted total time
        #Subsets with size n+1 will start execute
        if totalTime < budget:
            break

        else:
            maxSize = len(subset)

        #keep track of the subsets and time
        print subset
        print totalTime

    #After all subsets of size m totalTime are calculated
    #If totalTime is still greater than budget
    #Then maxSize is m-1
    if totalTime > budget:
        break

print maxSize - 1
