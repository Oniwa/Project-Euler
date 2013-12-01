primesum = 2
primelist = []
i=0

primelist.append(2)

for x in range(2,10):         
        for a in range(0,i+1):
                if x % primelist[a] == 0:                        
                        break
                elif a==i:
                        primesum = x + primesum
                        primelist.append(x)
                        i = i + 1
                        break

print primesum
##print primelist

