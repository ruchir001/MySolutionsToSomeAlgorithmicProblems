from operator import itemgetter
from fractions import gcd
n=int(input())
l=[]
ans=[]
gcd1=[]
for i in range(n):
    a=int(input())
    l.append(a)
print(l[0])          #for leader
ans.append(l[0])
for i in range(1,n): 
    x=gcd(l[0],l[i])      #for calculating hcf of each according to leader    
    lx=(x,l[i])  #to make a group of hcf and value
    gcd1.append(lx)
gcd1=sorted(gcd1,key=itemgetter(0))  #sort according to hcf
for i in range (len(gcd1)):
    ans.append(gcd1[i][1])
print(ans)
