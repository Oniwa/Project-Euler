def reverse_int(n):
    return int(str(n)[::-1])

def isPalindrom(n):
    if  reverse_int(n) == n:
        return True
    else:
        return False
