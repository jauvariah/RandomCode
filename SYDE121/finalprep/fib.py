term = int(raw_input("Enter the number of fib terms"))

fibs = range(10)

fibs[0] = 0
fibs[1] = 1

for i in range (2,term):
    fibs[i] = fibs[i-1] + fibs[i-2]
    print fibs[i]
