resultArr = []

for i in range (10000000, 100000000):
    digitFifthSum = 0
    for digit in str(i):
        digitFifthSum += int(digit) ** 5
    if i == digitFifthSum:
        resultArr.append(i)
	
	
print(resultArr)