n=input()
d=int(input())
z=[]
for i in range(0,len(n)):
    t=0;
    if n[i].isupper():
        t=ord(n[i])+d
        if t>ord('Z'):
            t=64+t-ord('Z')
        z.append(chr(t))
    else:
        t=ord(n[i])+d
        if t>ord('z'):
            t=ord('a')-1+t-ord('z')
        z.append(chr(t))
print("".join(z))
