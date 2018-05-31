#include<iostream>
using namespace std;
int main()
{
    int i,j,k,cons;
    long int t;
    cin>>t;
    if(t<=0||t>2985984)
        return(0);
    int n,sum[t];
    for(k=0;k<t;k++)
    {
        sum[k]=0;
    cin>>n;
    if(n<=0||n>190)
        return(0);

    cons=(n*(n+1)/2)-1;
    sum[k]=cons;
    for(i=2;i<n;i++)
    {
        sum[k]=sum[k]+i*(cons-i);
        cons=cons-i;
    }
    }
     for(k=0;k<t;k++)
   cout<<sum[k]<<"\n";
    return(0);
}
