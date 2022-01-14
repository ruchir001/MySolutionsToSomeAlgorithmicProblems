from pprint import pprint
n=int(input())  #for types  of biscuits
seller={}
for i in range(n):
    x=input()
    y=int(input())
    z=int(input())
    seller[x]=[y,z]
m=int(input())  #for number of biscuits ordered
name=[]
number=[]
for i in range(m):
    x=input()
    y=int(input())
    if y<seller[x][0]:              #to automatically cancel the order if the number ordered is greater than the stock
        name.append(x)
        number.append(y)
    
amount=0;
for i in range(len(name)):
    z=seller[name[i]]
    amount=amount+number[i]*z[1];
    z[0]=z[0]-number[i];
print(amount)
pprint(seller)


