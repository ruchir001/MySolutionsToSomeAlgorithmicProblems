from pprint import pprint
n=input()
n=n.lower
for i in range(len(n)):        #to check boundary conditions
    if not n[i].isalpha():
        print("Invalid input")
        exit()
l=list(n)
D={}
for i in range(len(l)):     # to count number of elements
    s=0;
    for j in range (0,len(l)):
        if l[i]==l[j]:
            s=s+1;
        D[l[i]]=s;
pprint(D)
a=list(D.keys())
b=list(D.values())
d={}       #inverted list        
for i in range(len(b)):     # to make the inverted dictionary as per question
    c=[]
    for j in range (0,len(b)):                  #if 2 same number is again repeated the it won't affect the answer asa value with same key cant be added in dictionary 
        if b[i]==b[j]:
            c.append(a[j])
    c.sort()
    d[b[i]]=c
pprint(d)
        
