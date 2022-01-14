#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t;cin>>t;
for(int q=0;q<t;q++)
{
long long int k,ans;
cin>>k;
if(k==1) cout<<10<<"\n";
if(k>1) ans+=10;

ans=ans%(pow(10,9)+7);
}
}
