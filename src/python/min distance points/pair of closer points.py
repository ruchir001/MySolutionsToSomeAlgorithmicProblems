n=int(input())
x=[]
y=[]
ans=[]
for i in range(n):
    x.append(int(input()))
    y.append(int(input()))
a=(((x[1]-x[2])**2)+((y[1]-y[2])**2))**0.5; #an initial value for comparision
x1,x2,y1,y2=0,0,0,0;
x1=x[1]
x2=x[2]
y1=y[1]
y2=y[2]
for i in range(n):
    for j in range(i+1,n):
        z=0;
        z=(((x[i]-x[j])**2)+((y[i]-y[j])**2))**0.5;
        z=round(z,2)
        a=round(a,2)
        if z<a:
            a=z
            x1=x[i]
            x2=x[j]
            y1=y[i]
            y2=y[j]
for i in range(n):                  #for multiple points with same min distance
    for j in range(i+1,n):
        b=0;
        b=(((x[i]-x[j])**2)+((y[i]-y[j])**2))**0.5;
        b=round(b,2)
        if b==a:
            l3=[0,0]
            l4=[0,0]
            l3=[x[i],y[i]]
            l4=[x[j],y[j]]
            ans.append(tuple(l3))
            ans.append(tuple(l4))
for i in range(len(ans)):
    print(ans[i])


            
