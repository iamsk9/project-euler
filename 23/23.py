#! /etc python
def cp(k):
  t=k
  import math
  for i in range(2,int(math.sqrt(k))+1):
    if(k%i==0):
        return 0
  return 1
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
      p[cnt].append(2)
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
def soad(k):
  t=pf(k)
  sum=1
  for i in range(len(t)):
    a=t[i]
    sum*=((pow(a[0],a[1]+1)-1)/(a[0]-1))
  return int(sum)
def bs(n):
	s=0
	e=len(l)
	mid=e/2
	for i in range(s,e):
		if(l[int(mid)]==n):
			return 1
		elif(l[int(mid)]<n):
			i=mid
			mid=(mid+e)/2
		else:
			e=mid+1
			mid=mid/2
	return 0
def chk(n):
	for i in range(10):
		if n-l[i]>0:
			if bs(n-l[i])==1:
				return 0
	return 1
print 'hi'
