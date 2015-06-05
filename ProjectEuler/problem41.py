import itertools

def isPrime(n):
    if n == 2 or n == 3: return True
    if n < 2 or n%2 == 0: return False
    if n < 9: return True
    if n%3 == 0: return False
    r = int(n**0.5)
    f = 5
    while f <= r:
        if n%f == 0: return False
        if n%(f+2) == 0: return False
        f +=6
    return True

print isPrime(5003)

def findsubsets(S,m):
    return set(itertools.permutations(S, m))

maxPrime = 5
arr = []

for j in range(1, 10):
    arr.append(str(j))

for i in range(1, 10):
    curArr = arr[:i]
    subsets = findsubsets(curArr, i)
    for subset in subsets:
        num = int("".join(subset))
        print num
        if num > maxPrime:
            if isPrime(num):
                maxPrime = num

print maxPrime
