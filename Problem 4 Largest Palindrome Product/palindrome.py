from isPalindrome import isPalindrom

npal = 0

for a in range(100,1000):
    for b in range(a,1000):
        product = a * b
        if isPalindrom(product) and product > npal:
            npal = product

print npal
                        
        




