#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
int t;cin>>t;
for(int i=0;i<t;i++)
{
int n,ans=0;
string s;
cin>>n>>s;
int x=count(s.begin(),s.end(),'P');

float p=x*100/n;
while(p<75)
{
int f=0;
for(int i=2;i<n-2;i++)
{
if(s[i]=='A'&&(s[i-1]=='P'||s[i-2]=='P')&&(s[i+1]=='P'||s[i+2]=='P'))
{
s[i]='M';
f=1;x++;ans++; break;
}
}
p=x*100/n;
if(f==0) {ans=-1;break;}
}
    cout<<ans<<"\n";
}
}

