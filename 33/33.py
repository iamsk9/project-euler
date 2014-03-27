def chk(j,i):
    #num=list(j%10,(j-j%10)/10,i%10,(i-i%10)/10)
    num=[]
    num.append((j-j%10)/10)
    num.append(j%10)
    num.append((i-i%10)/10)
    num.append(i%10)
    val=float(j)/i
    #print num
    ans=0
    if num[0]==num[2] and num[0] and not num[3]==0 and val==float(num[1])/num[3] :
      return num[3]
    elif num[0]==num[3] and num [0] and not num[2]==0 and val==float(num[1])/num[2]:
      return num[2]
    elif num[1]==num[2] and num[1] and not num[3]==0 and val==float(num[0])/num[3] :
      return num[3]
    elif num[1]==num[3] and num[1] and not num[2]==0 and val==float(num[0])/num[2]:
        return num[2]
    else:
        return -1

ans=[]
for i in range(10,99):
    for j in range(10,i):
        if chk(j,i)!=-1:
            ans.append([j,i,chk(j,i)])

#ans has all the four terms.. product of all ans[2] is the ans =200
            
