import numpy
import math

##My Code
print math.factorial(40)/(math.factorial(20)*math.factorial(20))

##Some interesting code
d = 20

grid = [ [0 for x in range(d+1)] for y in range(d+1) ]
def p(x,y):
	if x==d and y==d: return 1	# last element

	if grid[y][x]>0:			# We've already calculated routes for this node
		return grid[y][x]

	left,down = 0,0
	if x<d:
		left = p(x+1,y)
	if y<d:
		down = p(x,y+1)

	res = left+down
	grid[y][x] = res
	return res

print p(0,0)
