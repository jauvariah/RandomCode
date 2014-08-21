#Check if an input tree is a binary search tree

def isBST(tree, lastNode = []):
    if tree is None:
        return True
    if not isBST(tree.left, lastNode):
        return False

    if tree.val < lastNode[0]:
        return False

    lastNode[0] = tree.val

    return isBST(tree.right, lastNode)
