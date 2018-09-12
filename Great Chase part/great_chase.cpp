typedef long long int l1;
#include<iostream>
using namespace std;
int main()
{
    l1 t,z,d,s,dx,zx;

    cin>>t;
    int a[t],k=0;
    for(int i=0;i<t;i++)
    {
    a[i]=0;
    cin>>s>>d>>z;
    if(z<d)
    {a[k]=-1;continue;}
    if(z==d&&s>0)
        {a[k]=-1;continue;}
    dx=d+s;
    int j;
for( j=1;;j++)
    {
if(dx%z==0)
    break;

dx=dx+d;
}
    a[i]=dx/z;
    }
    for(int i=0;i<t;i++)
        cout<<a[i]<<"\n";
}
