#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool comp(pair<unsigned long long int,unsigned long long int> c1,pair<unsigned long long int,unsigned long long int> c2)
{
    if(c1.first==c2.first)
        return(c1.second<c2.second);
    else
    return(c1.first<c2.first);
}
int main()
{
    int t;
    unsigned long long int n,m,x,xb,y,yb;
    vector<unsigned long long int> a,b;
    vector<pair<unsigned long long int,unsigned long long int>> c;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {cin>>x;a.emplace_back(x);}
    for(int i=0;i<n;i++)
    {cin>>x;b.emplace_back(x);    c.emplace_back(make_pair(a[i]*b[i],b[i]));}
sort(c.begin(),c.end(),comp);
while(m!=0)
{
x=c[n-1].first;
xb=c[n-1].second;
y=c[n-2].first;
if(x==0)
    break;

if(x==y)
{
x=x-xb;
m--;}
else
{
t=(x-y)/xb;
if(t>=m)
{
    x=x-xb*m;
    m=0;
}
else
{
    if(t==0)
    {
        x=x-xb;
m--;}
else{x=x-((t)*xb);
    m=m-t;}
}

}
c[n-1].first=x;
sort(c.end()-5,c .end(),comp);
}
cout<<c[n-1].first;
   return 0;
}
