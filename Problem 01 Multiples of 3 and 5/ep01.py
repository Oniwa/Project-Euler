"""
Rewritten and Solved:  12/01/13

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""
__author__ = 'Johnny Dave'

multiple_sum = 0

for number in range(1, 1000):
    if number % 5 == 0 or number % 3 == 0:
        multiple_sum += number

print multiple_sum