from itertools import permutations

nos=["".join(a) for a in permutations('0123456789')]

def chk(n):
    if int(n[1:4])%2 or int(n[2:5])%3 or int(n[3:6])%5 or int(n[4:7])%7 or int(n[5:8])%11 or int(n[6:9])%13 or int(n[7:10])%17 :
        return 0
    else:
        return 1
    


ans=0
for i in range(len(nos)):
    if chk(nos[i])==1:
     ans+=int(nos[i])   
