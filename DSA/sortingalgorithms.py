from heapq import merge

def bubbleSort(lst):
    changed = True
    while changed:
        changed = False
        for i in xrange (len(lst) - 1):
            if lst[i] > lst[i+1]:
                lst[i], lst[i+1] = lst[i+1], lst[i]
                changed = True
    return None

def selectionSort(lst):
    for i in range(0, len(lst)-1):
        mn = min(range(i, len(lst)), key=lst.__getitem__)
        lst[i], lst[mn] = lst[mn], lst[i]
    return lst

def insertionSort(lst):
    for i in xrange (1, len(lst)):
        j = i - 1
        key = lst[i]
        while (lst[j] > key) and (j >= 0):
            lst[j+1] = lst[j]
            j -= 1
        lst[j+1] = key

def mergeSort(lst):
    if len(lst) <= 1:
        return lst

    middle = len(lst) / 2
    left = lst[:middle]
    right = lst[middle:]

    left = mergeSort(left)
    right = mergeSort(right)
    return list(merge(left, right))

if __name__ == "__main__":
    from random import shuffle

    testset = range(100)
    testcase = testset[:]  #make a copy
    shuffle(testcase)
    assert testcase != testset
    bubbleSort(testcase)
    assert testcase == testset
