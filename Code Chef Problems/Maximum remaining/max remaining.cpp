#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
    vector<long int> a;
    long int n,x;
    cin>>n;
    cin>>x;
    a.push_back(x);
    long int r=0;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(find(a.begin(),a.end(),x)==a.end())
        a.push_back(x);

    }
    sort(a.begin(),a.end());
    cout<<a[a.size()-2];

}

