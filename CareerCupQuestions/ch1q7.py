#Write a method to implement *, -, / operations. You should only use + operator

def multiplication(a, b):
    product = 0
    for i in xrange(0, a):
        product = product + b
    return product

def division(a, b):
    
