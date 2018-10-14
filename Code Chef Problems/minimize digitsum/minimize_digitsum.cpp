#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int digitsum(int x)
{
    int s=0;
    while(x/1>0)
    {
        s=s+(x%10);
        x=x/10;
    }
    return(s);
}

int main()
{
int  t;
cin>>t;
long long n,d,m,mo,x;
int  ans[t][2];

for(int i=0;i<t;i++)
{
cin>>n>>d;
vector<int> x,v;
x.push_back(n);
x.push_back(digitsum(n));
x.push_back(n+d);
for(int j=1;j<2000000;j++)
{
x.push_back(digitsum(x[j]));
x.push_back(x[j]+d);
}
v=x;
sort(v.begin(),v.end());
ans[i][0]=v[0];
ans[i][1]=0;
if(ans[i][0]==n)
{}
else
{
vector<int>::iterator it=find(x.begin(),x.end(),ans[i][0]);
int pos=it-x.begin()+1;
while(1)
{
if(pos%2==0)
{pos=(pos-2)/2;ans[i][1]++;}
else
{pos=(pos-1)/2;ans[i][1]++;}

if(pos==0)
    break;
}
}
}
for(int i=0;i<t;i++)
cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";

return 0;
}
