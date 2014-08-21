import itertools
def allSubsets(S, m):
    return set(itertools.combinations(S,m))
