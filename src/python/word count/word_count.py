s=input().rstrip().lower()
l=s.split()
a=[]
for i in range(len(l)):
    x=1;
    if l[i] not in a:            #to avoid repeated
        for j in range(i+1,len(l)):
            if l[i]==l[j]:
                x=x+1
        print(l[i]," ",x)
    
    
