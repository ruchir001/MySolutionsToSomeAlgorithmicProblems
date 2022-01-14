import re
s=input()
if len(s)>=8:
    
    if (re.search("[\d]{1,}",s) and  re.match("^[A-Za-z]",s)):
        t=0;
        for c in s:
            if (re.match("[\D]",c) and re.match("[\W]",c)):
                t=1;
        if t==1:
                print("Valid")
        else:
                print("Invalid")
    else:
        print("Invalid")
else:
    print("Invalid")
