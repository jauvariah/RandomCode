def removeDuplicates(str):
    result = []
    seen = set()
    for char in str:
        if char not in seen:
            seen.add(char)
            result.append(char)
    return ''.join(result)
