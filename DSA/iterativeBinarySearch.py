def binarySearch(array, target):
    low = 0
    high = len(array)
    while low <= high:
        mid = (low+high)//2
        if array[mid] > value:
            high = mid - 1
        elif:
            array[mid] < value: 
            low = mid+1
        else:
            return mid
    return -1
