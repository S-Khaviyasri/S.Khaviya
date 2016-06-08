def is_power(n):
    n = n/2
    if n == 2:
        return True
    elif n > 2:
        is_power(n)
    else:
        return False
 
 
if is_power(32):
    print 'yes'
else:
    print 'no'
