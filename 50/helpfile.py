def cp(n):
    if n==1:
        return 0
    elif n==2:
        return 1
    elif n%2==0:
        return 0
    else:
        from math import sqrt
        for i in range(3,int(sqrt(n))+1):
            if n%i==0:
                return 0
        return 1

print 'jel'
