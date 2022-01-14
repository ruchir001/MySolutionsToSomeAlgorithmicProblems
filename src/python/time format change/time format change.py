n=input()
if(int(n[0:2])==12):
    n=n.replace('12','00')
if n.endswith("AM"):
    print(n[0:8])
elif n.endswith("PM"):
    hh=int(n[0:2])+12
    mm=n[3:5]
    ss=n[6:8]
    print("{0}:{1}:{2}".format(hh,mm,ss))
else:
    print("INVALID")
