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

def chk(n):
    val=str(n)
    for i in range(len(val)):
        #print val,
        if cp(int(val))==0:
            return 0
        val=val[1:]+val[0]
    return 1

c=0
for i in range(2,1000000):
    if chk(i)==1:
       c+=1
print c
        
#55 might be the ans   
