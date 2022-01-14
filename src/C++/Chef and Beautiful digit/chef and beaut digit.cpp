#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
int t;
cin>>t;
vector<long long int> ans;
for(int q=0;q<t;q++)
{
string x;int d;
cin>>x;cin>>d;
vector<int> a;long long int n=x.length();
for(int i=0;i<n;i++)
    a.push_back(x[i]-'0');
int m=*min_element(a.begin(),a.end());
if(m>d){for(long long int i=0;i<n;i++) a[i]=d;}//all d
else{
for(long long int j=0;j<n;j++)
{
    m=*min_element(a.begin()+j,a.end());
    if(m>=d)
    {for(long long int i=j;i<n;i++) a[i]=d;
break;}
for(long long int i=j;i<n;i++)
{
    if(a[i]==m)
        break;
a.erase(a.begin()+i);i--;
a.push_back(d);
}
}
}
reverse(a.begin(), a.end());
long long int decimal = 1;
long long int total = 0;
for (auto& it : a)
{
    total += it * decimal;
    decimal *= 10;
}
ans.push_back(total);
}

for(int q=0;q<t;q++)
    cout<<ans[q]<<"\n";

}

