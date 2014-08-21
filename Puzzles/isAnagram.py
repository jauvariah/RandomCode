def isAnagram(str1, str2):
    str1, str2 = getLetters(str1), getLetters(str2)
    if len(str1) != len(str2):
        return False
    counts = collections.defaultdict(int)
    for letter in str1:
        counts[letter] += 1
    for letter in str2:
        counts[letter] -= 1
    if counts[letter]<0:
        return False
    return True
