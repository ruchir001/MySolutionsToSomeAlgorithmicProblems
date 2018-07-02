from pprint import pprint
r1=int(input())   #for rook
c1=int(input())
r2=int(input())   #for queen
c2=int(input())
t1=(r1,c1)
t2=(r2,c2)
roo=set()
que=set()
for i in range(0,8):       #for all possible locations of rook and queen in a row and column
    i=i+1
    if not i==r1:             #to remove the position of queen from possibilities of rook and vice versa    
        t=(i,c1)
        roo.add(t)
    if not i==r2:
        t=(i,c2)
        que.add(t)
    if not i==c1:
        t=(r1,i)
        roo.add(t)
    if not i==c2:
        t=(r2,i)
        que.add(t)
#now for the diagonal possibilities of queen
j=c2+1
for i in range(r2+1,9):
    if j<=8 and not(i==r1 and j==c1):        #to remove if the position becomes equal to original position of rook
       t=(i,j);
       que.add(t)
    else:
        break
    j+=1;
j=c2-1
for i in range(r2-1,0,-1):
    if j>0 and not(i==r1 and j==c1):
       t=(i,j);
       que.add(t)
    else:
        break
    j-=1;

j=c2-1
for i in range(r2+1,9):
    if j>0 and not(i==r1 and j==c1):
       t=(i,j);
       que.add(t)
    else:
        break
    j-=1;
j=c2+1
for i in range(r2-1,0,-1):
    if j<=8 and not(i==r1 and j==c1):
       t=(i,j);
       que.add(t)
    else:
        break
    j+=1;
ans=roo&que
ans=sorted(ans)
for i in range(0,len(ans)):
    print(ans[i])


