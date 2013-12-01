"""
Started: 11/30/13
Solved: 11/30/13

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
"""
__author__ = 'Johnny Dave'

num = 2**1000
snum = str(num)
total = 0

for digit in snum:
    total += int(digit)

print total

#One line python solution
#print(sum(int(digit) for digit in str(2**1000)))

