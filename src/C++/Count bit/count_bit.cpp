#include<iostream>
#include<algorithm>
#include<bitset>
#include<string>
#include<stdio.h>
#include<sstream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],x;
    int i=0;
for(int i=0;i<n;i++)  {
cin>>x;
string y=bitset<8>(x).to_string();
a[i]=count(y.begin(),y.end(),'1');

}

    int cou=0,temp;



    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                cou++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;



            }
        }
    }
    cout<<cou;
}
