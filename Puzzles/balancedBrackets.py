def isBalanced(str):
    if len(str) % 2 != 0:
        return False
    opening = set('([{')
    match = set([ ("(",")"), ("[", "]"), ("{", "}") ])
    stack = []
    for char in str:
        if char in opening:
            stack.append(char)
        else:
            if len(stack) == 0:
                return False
            lastOpen = stack.pop()
            if (lastOpen, char) not in match:
                return False
    return len(stack) == 0
