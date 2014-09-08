#On a 2x2 grid, the reachable areas of the monkey is a square with four corners at (19,0), (-19,0), (0, 19), (0, -19). 
#Thus calculating the number of walkable point is the same as calcualting the area of the aforementioned square. 

import math

steps = 19

diagonalLength = steps * 2

side = math.sqrt(19 * 19 / 2)

area = side * side

print int(area)
