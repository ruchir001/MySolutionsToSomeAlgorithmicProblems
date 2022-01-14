typedef long int l1;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    l1 s,r,x,u,l;
    cin>>s>>r;
    int a[r],k=0;
    vector<l1> v;
    for(int i=0;i<s;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    vector<l1>::iterator itr;
    for(int i=0;i<r;i++)
    { a[k]=0;
        cin>>l>>u;
        for(itr=v.begin();itr!=v.end();itr++)
        {
if(*itr<l)
    continue;
if(*itr>u)
                    break;
                    a[k]=a[k]+1;


        }
    k=k+1;
    }
    for(int i=0;i<k;i++)
        cout<<a[i]<<"\n";

}
