def factorial(num):
    product = 1
    for i in range(num):
        product *=   i + 1
    return product

resultArr = []

for i in range (0, 10000000):
    digitFacSum = 0
    for digit in str(i):
        digitFacSum += factorial(int(digit))
    if i == digitFacSum:
        resultArr.append(i)
	
	
print(resultArr)