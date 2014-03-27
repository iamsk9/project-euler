def cp(n):
    if n==1:
        return 0
    if n==2:
        return 1
    #print n
    if n%2==0:
        return 0
    else:
        from math import sqrt
        for i in range(3,int(sqrt(n))+1,2):
            if n%i==0:
                return 0
        return 1

def chk(n):
    val=str(n)
    #print val,len(val)
    for i in range(len(val)):
        a=(val[i:])
        b=(val[:-1*i])
        #print len(a),a,len(b),b
        if (len(a) and cp(int(a))==0) or (len(b) and cp(int(b))==0) :
              return 0
    return 1

c=0
i=10
tot=0
while c<11:
    if chk(i)==1:
        c+=1
        tot+=i
        print c,i
    i+=1

            
print tot
