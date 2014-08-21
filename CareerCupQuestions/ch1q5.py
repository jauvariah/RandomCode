#1.5 Write an algorithm which computes the number of trailing zeros in n factorial

def factorialTrailingZeros(n):
    factorial = 1
    for i in range(1, n+1):
        factorial = factorial * i
    
    zeroCounter = 0
    while factorial % 10 == 0:
        zeroCounter += 1
        factorial = factorial / 10
    return zeroCounter

