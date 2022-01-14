n=int(input())
l=[]
for i in range(n):
    x=int(input())
    y=int(input())
    z=int(input())
    l.append(x+y+z)
for i in range(1,n):  #insertion sort 
    j=i-1;
    temp=l[i]
    while(temp>l[j] and j>=0):
        l[j+1]=l[j]
        j=j-1
    l[j+1]=temp
        
for i in range(n):
    print(l[i])
