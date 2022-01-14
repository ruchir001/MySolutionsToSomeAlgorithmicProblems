#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
int t;
cin>>t;
vector<int> ans;
for(int q=0;q<t;q++){
long int n,x,neg,pos,z;
cin>>n;
vector<long long int> a;
for(int i=0;i<n;i++)
{cin>>x;a.push_back(x);}
sort(a.begin(),a.end());
if(a[0]>=0||a[n-1]<=0){ans.push_back(n);ans.push_back(n);}
else{
        z=count(a.begin(),a.end(),0);
for(int j=0;j<n;j++)
{
if(a[j]>=0){ neg=j;pos=n-j-z;break;}
}
vector<int> y;y.push_back(neg);y.push_back(pos);if(z!=0)y.push_back(z);
ans.push_back(*max_element(y.begin(),y.end()));
ans.push_back(*min_element(y.begin(),y.end()));
}
}

for(int q=0;q<2*t;q+=2)
{
    cout<<ans[q]<<" "<<ans[q+1]<<"\n";
    }
}

