string = "aaabbbb"
 
found = False
# Write the code to find the required palindrome and then assign the variable 'found' a value of True or False
def all_perms(elements):
    if len(elements) <=1:
        yield elements
    else:
        for perm in all_perms(elements[1:]):
            for i in range(len(elements)):
                # nb elements[0:1] works in both string and list contexts
                yield perm[:i] + elements[0:1] + perm[i:]
                
def palindrome(num):
    flag=0
    r=num[::-1]
    for i in range (0, len(num)-1):
        if(r[i]==num[i]):
            flag=1
        else:
            flag=0
    return flag

inputSet = set(string)
inputList = list(string)
print len(inputSet)
print len(inputList)
if len(inputSet) == len(inputList)/2:
    for anagram in all_perms(string):
        if palindrome(anagram):
            found = True
            break
    
if not found:
    print("NO")
else:
    print("YES")
