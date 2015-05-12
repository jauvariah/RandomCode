maxChain = 0
maxStart = 0
for i in range (2, 1000000):
	start = i
	chainSize = 0
	while start > 1:
		if start % 2 == 0:
			start /= 2
			chainSize += 1
		else:
			start = 3 * start + 1
			chainSize += 1
	if chainSize > maxChain:
		maxChain = chainSize
		maxStart = i
		
print(maxChain)
print(maxStart)