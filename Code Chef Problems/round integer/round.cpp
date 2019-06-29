#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t;cin>>t;
vector<long int> v;
for(int q=0;q<t;q++)
{
long long int n,low;
cin>>n;
 low=n*10;
long long int curr=1;
    for (int curr = low;;curr++) {

        // Find sum of digits in current no.
        int sum = 0;
        for (int x = curr; x > 0; x = x / 10)
            sum = sum + x % 10;

        // If sum is 10, we increment count
        if (sum %10== 0)
        {cout<<curr<<"\n";
break;}
}
}}
