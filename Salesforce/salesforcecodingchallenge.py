
import unittest

friendGraph = {}
#Initialized a graph to model friendship connections

def flatten(lst):
	return sum( ([x] if not isinstance(x, list) else flatten(x)
		     for x in lst), [] )

def getRoots(aNeigh):
    def findRoot(aNode,aRoot):
        while aNode != aRoot[aNode][0]:
            aNode = aRoot[aNode][0]
        return (aNode,aRoot[aNode][1])
    myRoot = {}
    for myNode in aNeigh.keys():
        myRoot[myNode] = (myNode,0)
    for myI in aNeigh:
        for myJ in aNeigh[myI]:
            (myRoot_myI,myDepthMyI) = findRoot(myI,myRoot)
            (myRoot_myJ,myDepthMyJ) = findRoot(myJ,myRoot)
            if myRoot_myI != myRoot_myJ:
                myMin = myRoot_myI
                myMax = myRoot_myJ
                if  myDepthMyI > myDepthMyJ:
                    myMin = myRoot_myJ
                    myMax = myRoot_myI
                myRoot[myMax] = (myMax,max(myRoot[myMin][1]+1,myRoot[myMax][1]))
                myRoot[myMin] = (myRoot[myMax][0],-1)
    myToRet = {}
    for myI in aNeigh:
        if myRoot[myI][0] == myI:
            myToRet[myI] = []
    for myI in aNeigh:
        myToRet[findRoot(myI,myRoot)[0]].append(myI)
    return myToRet

#flatten and getRoots are for indirectFriends functions


def makeFriend (name1, name2):
  if name1 not in friendGraph:
    friendGraph[name1] = []
  if name2 not in friendGraph[name1]:
    friendGraph[name1].append(name2)

  if name2 not in friendGraph:
    friendGraph[name2] = []
  if name1 not in friendGraph[name2]:
    friendGraph[name2].append(name1)

def unmakeFriend (name1, name2):
  if name2 in friendGraph[name1]:
    friendGraph[name1].remove(name2)
  if name1 in friendGraph[name2]:
    friendGraph[name2].remove(name1)

def getDirectFriends (name):
  return friendGraph[name]

def getIndirectFriends (name):
  allFriends = []
  indirectFriends = []
  directFriends = getDirectFriends(name)
  roots = getRoots(friendGraph)
  #This will return the roots and all their subsequent connections

  for root in roots:
    if name in roots[root]:
      allFriends.append(roots[root])
  #If name is in any of the subsequent roots, add the entire graph to allFriends
  #And flatten the set
  allFriends = set(flatten(allFriends))

  for friend in allFriends:
    if friend not in directFriends:
      indirectFriends.append(friend)
  indirectFriends.remove(name)
  #Remove directFriends and name from allFriends

  return indirectFriends

class unitTests(unittest.TestCase):
  makeFriend("Aaron", "Bella")
  makeFriend("Bella", "Cindy")
  makeFriend("Bella", "David")
  makeFriend("David", "Elizabeth")
  makeFriend("Cindy", "Frank")

  def testGetDirectFriends(self):
    self.assertEqual(getDirectFriends("David"), ["Bella", "Elizabeth"])

  def testGetIndirectFriends(self):
    self.assertEqual(getIndirectFriends("David"), ['Frank', 'Aaron', 'Cindy'])


unittest.main()
