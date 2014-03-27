def chk(i):
    n=i
    val=0
    import math
    while n>0:
        val+=(math.factorial(n%10))
        n/=10
    if val==i:
        return val
    else:
        return 0

ans=0
for i in range(10,10000000):
    k=chk(i)
    if not k==0:
        print i,k
        ans+=k

