maxc=0
maxp=0
for p in range(120,1000):
    count=0
    for b in range(2,p):
        a=(float(p*p-2*b*p)/(2*(p-b)))
        if a%1==0 and a>0:
            #print a,b,p-(a+b),p
            count+=1
    if maxc<count:
        maxc=count
        maxp=p


print maxp,maxc
