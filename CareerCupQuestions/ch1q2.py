#Write a method to count the number of 2's between 0 and n
import math

def twoCounter(n):
    counter = 0
    for i in xrange(n):
        while (i > 0):
            digit = i % 10
            if digit == 2:
                counter += 1
            i = math.floor(i / 10)
    return counter

print twoCounter(35)
