def chk(i):
    n=i
    if str(i)==str(i)[::-1] and bin(i)[2:]==(bin(i)[2:])[::-1] :
        return i
    else:
        return 0

val=0
for i in range(1,1000000):
    k=chk(i)
    if not k==0:
        print k
        val+=k

