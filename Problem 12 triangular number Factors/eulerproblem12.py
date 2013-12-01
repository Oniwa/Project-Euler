triSum = 0
count = 0
triNum = 0
while(count < 500):
    triNum = triNum + 1
    ##for y in range(1,triNum+1):
    ##for x in range(1,triNum+1):
        ##triSum = triSum + x
    triSum = triSum + triNum
    for i in range(1,triSum+1):
        if(triSum % i == 0):
            count = count + 1
    ##print "Sum ", triSum, " Count ", count
    ##triSum = 0
    if(count >= 500):
        count = count
    else:
        count = 0
        

print triSum
