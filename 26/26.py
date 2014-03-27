def pf(k):
  t=k
  p=[]
  cnt=0
  if cp(k):
    p.append([])
    p[0].append(k)
    p[0].append(1)
    return p
  else:
    if k%2==0:
      p.append([])
      p[0].append(2)
      cnt+=1
      p[0].append(0)
      while k%2==0:
        p[0][1]+=1
        k/=2
    for i in range(3,int(t/2)+1,2):
      if(k%i==0):
        p.append([])
        p[cnt].append(i)
        p[cnt].append(0)
        while k%i==0:
          p[cnt][1]+=1
          k/=i
        cnt+=1
    return p

def cp(k):
	t=k
	import math
	for i in range(2,int(math.sqrt(k))+1):
		if(k%i==0):
			return 0
	return 1

l=[]
for i in range(3,1000):
	if(cp(i)==1):
		l.append(i)
m=1
mi=1
for i in range(len(l)):
	n=l[i]
	ans=0
	t=pf(n)
	if len(t)==2 and t[0][0]==2 and t[1][0]==5:
		continue
	elif len(t)==1 and (t[0][0]==2 or t[0][0]==5):
			    continue
	else:
		rem=10%n
		rem=(rem*rem)%n
		while not rem==10%n:
			orem=rem
			nrem=(rem*(10%n))%n
			if not orem==nrem:
				rem=nrem
			else:
				break
			ans+=1
		if m<ans:
			m=ans
			mi=n
			#print(n,ans+1)
