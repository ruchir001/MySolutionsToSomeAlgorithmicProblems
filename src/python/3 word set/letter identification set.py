a=input()
a=set(a.rstrip())
b=input()
b=set(b.rstrip())
c=input()
c=set(c.rstrip())

l1=list(a&b&c)  #for letters common to all three words
l1.sort()
print(','.join(l1))    #to print the list without

l1=list((a&b)-c)   # for letters common to first two words but not in 3rd word
l1.sort()
print(','.join(l1))

l1=list((a-b)-c)  # for letters in first word  but not in 2nd and 3rd word
l1.sort()
print(','.join(l1))

l1=list((a|b)|c)    #for all letters in the 3 words 
l1.sort()
print(','.join(l1))


