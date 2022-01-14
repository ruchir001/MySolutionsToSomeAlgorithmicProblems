def reverse(a):
    a=str(a)
    return(int(a[-1::-1]))
n=int(input())
x=n**2
x=reverse(x)  #for reverse of square of n
n=reverse(n)
y=n**2  #for square of reverse of n
if x==y:
    print('Adam number')
else: 
    print("Not an Adam number")
