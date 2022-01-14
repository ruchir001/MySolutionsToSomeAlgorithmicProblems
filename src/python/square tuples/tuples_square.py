l1=[0,0]
l2=[0,0]
l3=[0,0]
l4=[0,0]
for i in range(0,2):   #to read coordinates of two adjacent points
    a=int(input())
    l1[i]=a;
for i in range(0,2):
    a=int(input())
    l2[i]=a;
if l1[0]==l2[0]:
    s=abs(l1[1]-l2[1])
    x=l1[0]+s;
    l3[0:2]=x,l1[1]
    l4[0:2]=x,l2[1]
else:
    s=abs(l1[0]-l2[0])
    y=l1[1]+s;
    l3[0:2]=l1[0],y
    l4[0:2]=l2[0],y
print(tuple(l3))
print(tuple(l4))
z=0;
for i in range (2):         #for hypotenuse
    z=z+(l1[i]-l4[i])**2;
z=z**0.5
print(format(z,'.2f'))
