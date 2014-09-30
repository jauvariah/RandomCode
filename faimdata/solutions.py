#Problem 1

def isInclusive(longer, shorter):
    charDict = {}
    for char in longer:
        charDict[char]++
    for char in shorter:
        if char not in charDict:
            return False
    return True

#Problem 2

def intAppearance(array):
    length = len(array)
    intDict = {}
    for int in array:
        intDict[int]++
    for key, value in intDict.iteritem():
        if value > length / 2:
            return key

#Problem 2 with constant space complexity

def intAppearanceConstSpace(array):
    candidate = 0
    counter = 0
    for i in range(0, len(array)-1):
        if array[i] == array[i+1]:
            counter++
        elif counter == 0:
            candidate = array[i]
        else::
            counter--
    return candidate

#Problem 3

def xLocator(matrix, x):
  i = 0
  j = len(matrix[1])
  while j >= 0 and i <= len(matrix):
      if matrix[i][j] == x:
          return True
      elif matrix[i][j] < x:
          i++
      else:
          j--
  return False       
