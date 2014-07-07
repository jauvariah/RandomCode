def ArrayAdditionI(arr): 
  largest = max(arr)
  print largest
  arr.remove(largest)
  print arr
  sortedList = sorted(arr)
  print sortedList
  for i in range (0, len(arr)):
    result = sortedList[i]
    print result
    if result == largest:
      return "true"
      break
    for j in range (i+1, len(arr)):
      result = sortedList[i] + sortedList[j]
      print result
      if result == largest:
        return "true"
        break
      for k in range (j+1, len(arr)):
        result = sortedList[i] + sortedList[j] + sortedList[k]
        print result
        if result == largest:
          return "true"
          break
  return "false"


inputList = [10, 20, 30, 40, 100]
print ArrayAdditionI(inputList)
