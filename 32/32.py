def chk(a,b,c):
    import math
    la=a
    lb=b
    lc=c
    na=math.ceil(math.log(a,10))
    nb=math.ceil(math.log(b,10))
    nc=math.ceil(math.log(c,10))
    #print na,nb,nc
    if not na+nb+nc==9:
        return 0
    else:
        num=list()
        while a>0:
           num.append(a%10)
           a/=10
        while b>0:
           num.append(b%10)
           b/=10
        while c>0:
           num.append(c%10)
           c/=10
        new=list(set(num))
        #print num
        #print new
        if num.__contains__(0)==1:
            return 0
        elif len(new)==9:
            print la,lb,lc
            return 1
        else:
            return 0

sum=0
temp=list()
for i in range(2,99):
	for j in range(101,9999):
		if chk(i,j,i*j)==1:
			if temp.__contains__(i*j)==0:
				temp.append(i*j)
				sum+=i*j
print "final sum"
print sum

        
        
