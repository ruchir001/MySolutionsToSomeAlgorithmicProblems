import re
n=input()
z=len(n)
if re.match("[qwertyuiop]{%d}"%z,n)or re.match("[asdfghjkl]{%d}"%z,n) or re.match("[zxcvbnm]{%d}"%z,n)   :
    print("yes")
else:
    print("no")
