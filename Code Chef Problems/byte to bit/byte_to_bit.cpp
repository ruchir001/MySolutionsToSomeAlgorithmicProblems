#include<iostream>
#include<vector>
using namespace std;
int main()
{

    long long t;
    long long int n,x,b=1,nb=0,by=0,j,bt=0,nt=0,byt=0;
    cin>>t;
    vector<vector<long long int>> ans;

    for(int i=0;i<t;i++)
    {
        b=1;nb=0;by=0;bt=0;nt=0;byt=0;
        cin>>n;
        j=0;
    while(j<(n))
        {
        if(b>=1&&bt==2)
        {
            bt=0;
            nb=b;
            nt=0;
            b=0;
        }
        if(nb>=1&&nt==8)
        {
            nt=0;
            by=nb;
            byt=0;
            nb=0;
        }
        if(by>=1&&byt==16)
        {
            byt=0;
            b=b+2*by;
            bt=0;
            by=0;
        }
        if(b>=1&&bt!=2)
        {bt++;}
        if(nb>=1&&nt!=8)
        {nt++;}
        if(by>=1&&byt!=16)
        {byt++;}
        j++;
        }
        vector<long long int> vx={b,nb,by};
        ans.push_back(vx);

    }
    for(int i=0;i<t;i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<"\n";
return 0;
}
