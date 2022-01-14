def makeset(p):
    p=p.lower()
    p=p.replace(" ","") #to replace the whitespaces
    t=set(p)         # a set of all characters in para       
    return(t)              
def pangram(p):
    a=makeset(p)
    b=set("qwertyuiopasdfghjklzxcvbnm")   #a set of all letters
    if b==a:
        print("Pangram")
    else:
        print("Not pangram")
p=input().rstrip()
pangram(p)
