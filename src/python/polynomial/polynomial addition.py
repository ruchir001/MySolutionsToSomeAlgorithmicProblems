a=int(input())#degree of 1st polynomial
l1=[]
a=a+1
for i in range(0,a):
    l1.append(int(input()))
b=int(input())#degree of 2nd polynomial
l2=[]
b=b+1
for i in range(0,b):
    l2.append(int(input()))
l3=[]
if(a<b):
    t=b;
else:
    t=a;
for i in range(-1,(-t-1),-1):
    z=0;
    if(i>=(-a)):
        z=z+l1[i];
    if(i>=(-b)):
        z=z+l2[i]
    l3.append(z)

print(l3[::-1])
