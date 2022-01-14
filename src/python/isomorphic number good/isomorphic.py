def isomorphic(a,b):
    a=list(str(a)) #so that every digit is seperated
    b=list(str(b))
    if not len(a)==len(b):
        return(0)
    else:
        la=set()   #to avoid repeatition
        lb=set()
        for i in range(len(a)):
            for j in range(i+1,len(a)):
                if a[i]==a[j]:
                    t=(i,j)
                    la.add(t)
                if b[i]==b[j]:
                    t=(i,j)
                    lb.add(t)
        x=set()  #to check that la and lb both are empty (for 10 and 12 case)
        if la==x and lb==x:
            return(0)
        if(la==lb):
            return(1)
        else:
            return(0)
n=int(input())
l=[]
for i in range(n):
    l.append(int(input()))
print(l[0]) #for first one
y=0
for i in range(1,n):   #to check isomorphic numbers to first number
    t=isomorphic(l[0],l[i])
    if t==1:
        y=1
        print(l[i])
if y==0:
    print("No isomorphic")
