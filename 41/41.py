def cp(n):
    from math import sqrt
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            return 0
    return 1

from itertools import permutations
num=["".join(a) for a in permutations('7654321')]

for i in range(len(num)):
    if cp(int(num[i]))==1:
        print num[i]
        break



        
    
