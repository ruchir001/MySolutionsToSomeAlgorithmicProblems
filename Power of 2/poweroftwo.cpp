#include<iostream>
using namespace std;
int main()
{
int t,i;
cin>>t;
if((t<1||t>100000))
    return(0);
unsigned long long a[t];
for(i=0;i<t;i++)
{
cin>>a[i];
if((a[i]<1||a[i]>1000000000000000000))
    return(0);

}
for(i=0;i<t;i++)
{
    if((!(a[i]&(a[i]-1))))
        cout<<"Yes\n";
    else
    cout<<"No\n";
}
return(0);
}
