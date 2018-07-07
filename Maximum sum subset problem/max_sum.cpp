#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long int n,x;
    cin>>n;
    vector <long int> v;
    vector <long int> ::iterator it;
    for(long int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v.back()<=0)
    {
       cout<<v.back()<<" 1";
    }
    else
    {
        long int sum=0,num=0;

        for(it=v.end()-1;it!=v.begin()-1;it--)
        {

if(*it<0)
    break;
else if(*it==0)
{
    num++;
}
else{
    sum=sum+(*it);
    num++;
}

        }
        cout<<sum<<" "<<num;
    }
}
