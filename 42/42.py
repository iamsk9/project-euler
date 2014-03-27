words=open('words.txt','r').read().split(',')

words=[ "".join(a[1:-1]) for a in words]

temp=[]
for i in range(1,40):
    temp.append((i*(i+1))/2)
#print temp

def val(word):
    s=0
    for i in range(len(word)):
        s+=ord(word[i])-64
    
    if temp.__contains__(s):
        #print word,s
        return 1
    else:
        return 0
tot=0
for i in range(len(words)):
    if val(words[i]):
        tot+=1

print tot
    
