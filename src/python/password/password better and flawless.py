import re
s=input()
if len(s)>=8:
    if (re.search("\d",s) and re.search("[^a-zA-Z0-9]",s) and re.match("^[A-Za-z]",s)):
        print("Valid")
    else:
        print("Invalid")
else:
    print("Invalid")
