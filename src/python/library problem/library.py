n=int(input())
if n<=0:
    print("Invalid")
else:
    lib=[]
    z=[]
    for i in range(0,n):
        a=input()
        a=a.rstrip()
        t=0;
        for j in range(0,len(z)):   #no need of z just check in lib again
            if(a==z[j]):
                t=1
                break
        if t==0:
            lib.append(a)
            z.append(a)
    r=input()
    print(lib)
    x=0;
    for i in range (0,len(lib)):
        if (r==lib[i]):
            x=1;
            break
    if x==1:
        print("Found")
    else:
        print("Not found")
