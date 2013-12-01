n = 13
count = 1

print n
while(n != 1):
    if(n % 2 == 0):
        n = n/2
        print n
        count = count + 1
    else:
        n = 3*n + 1
        print n
        count = count + 1

print count
