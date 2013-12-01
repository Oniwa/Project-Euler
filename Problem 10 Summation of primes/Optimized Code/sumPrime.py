from isPrime import isPrime

limit = 2000000
sumPrime = 5
n = 5

##for n in range(5, limit,2):
while n <= limit:
    if isPrime(n):
        sumPrime = sumPrime + n
        n = n + 2
    elif n <= limit and isPrime(n):
        sumPrime = sumPrime + n
        n = n + 4
    else:
        n = n + 2    

print sumPrime
    
