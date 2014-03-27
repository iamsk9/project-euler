num="0"
i=0
while(len(num)<10000012):
   i+=1
   num+=str(i)

prod=1
for i in range(7):
    prod*=num[pow(10,i)]

print prod
