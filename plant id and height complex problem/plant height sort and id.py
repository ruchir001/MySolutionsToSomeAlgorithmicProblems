n=int(input())
idl=[]
hl=[]
for i in range (0,n):
    a=int(input())
    if a>0:
        idl.append(a)
    else:
        print("Invalid")
        break
    b=int(input())
    if b>0:
        hl.append(b)
    else:
        print("Invalid")
        break
for i in range(0,n):
    print(idl[hl.index(min(hl))])
    del idl[hl.index(min(hl))]
    del hl[hl.index(min(hl))]
    
        
    
