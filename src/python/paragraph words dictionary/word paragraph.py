from pprint import pprint
para=input()
l=para.split()
for i in range(0,len(l)):       #to check valadity of para
    l[i]=l[i].lower()           # to remove case sensitivity
    for j in range(len(l[i])):            
        if not l[i][j].isalpha():      
            if j==len(l[i])-1:
                if not l[i][j].isalnum():        #to check if special caracter is only at end of word
                    l[i]=l[i].replace(l[i][-1],"")  # to remove the special character from end of the word
                    break
            else:
                print("Invalid input")
                exit()

d={}
for i in range(0,len(l)):
    s=0;
    for j in range (0,len(l)):
        if (l[i]==l[j]):
            s=s+1;
    d[l[i]]=s
pprint(d)
