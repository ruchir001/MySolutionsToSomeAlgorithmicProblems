n=input().rstrip()
x=str(int(n)**2)
if x.endswith(n):
    print("automorphic")
else:
    print("not automorphic")
