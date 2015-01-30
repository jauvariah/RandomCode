#The number 1978 is such a number that if you add the first 2 sets of numbers, you'll will get the middle 2 sets of numbers. So in 1978, 19+78=97; so the question is write a formula that can find numbers that satisfy these conditions.

#From Business Insider: http://www.businessinsider.com/heres-the-answer-to-that-impossible-quant-interview-question-2011-9

resultList = []

for i in range (1000, 9999):
	iString = str(i)
	
	firstSet = int(iString[:2])
	
	secondSet = int(iString[-2:])
	
	middleSet = int(iString[2:3])
	
	if firstSet + secondSet == middleSet:
		resultList.append(i)
		
print resultList