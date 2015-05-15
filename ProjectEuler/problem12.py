tris = []
primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71]

for i in range (1, 100):
  tri = i*(i+1)/2
  tris.append(tri)

print tris

for j in range(0, len(tris)):
  count = 0
  for i in range(0, 19):
    curCount = 0
    if tris[j] == 1:
      break
    while tris[j] % primes[i] == 0:
      tris[j] = tris[j] / primes[i]
      curCount =+ 1
    if curCount != 0:
      count += (curCount+1)

  print count