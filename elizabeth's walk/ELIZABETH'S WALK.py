def uphill(d):
    d=d/1000  # converting meter in kilometer
    t=d/2  #time in hours
    t=t*60 #time in minutes
    return(t)
def ground(d):
    d=d/1000
    t=(d/3)*60
    return(t)
def downhill(d):
    d=d/1000
    t=(d/6)*60
    return(t)
x=int(input())#ground
y=int(input())#uphill
z=int(input())#downhill
m1=int(input())#minutes spend
mh=m1//60 #for hours spend
mm=m1%60 #for minutes spend

#for going
t1=ground(x)+uphill(y)+downhill(z)
t1h=t1//60 #hours
t1m=t1%60 # minutes
tgh=6+t1h
tgm=t1m
print(int(tgh)," ",int(tgm))

# for returning  here the uphill will become downhill as reverse
t2=ground(x)+downhill(y)+uphill(z)
t2h=t2//60
t2m=t2%60
trm=tgm+t2m+mm
trh=tgh+mh+t2h
if trm>=60:
    trh=trh+trm//60
    trm=trm%60
print(int(trh)," ",int(trm))
