from collatzCount import collatzCount

check = 0
count = 0
number = 0

for n in range(1,1000001):
    check = collatzCount(n)
    if(check > count):
        count = check
        number = n

print number
print count

print 2**1000


