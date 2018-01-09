fn=[]
while  1:
    n=input()
    n=n.replace(" ","")
    if n=="stop":
        break
    else:
        fn.append(n)
print("number of friends %d"%len(fn))
z=""
for i in range(0,len(fn)):
    if(len(fn[i])>len(z)):
        z=fn[i]
print(z);
print(len(z))
