rows=int(input())
cols=int(input())
mat=[[0 for i in range(cols)]for j in range (rows)]
if rows<=0 or cols<=0:
    print("Invalid input")
else:
    c=0;
    t=0;
    for i in range (rows):
        for j in range (cols):
            mat[i][j]=int(input())
            if(mat[i][j]==0):
                c=c+1;
            else:
                t=t+1
    if c>=t:
        print("Sparse")
    else:
        print("Not sparse")
