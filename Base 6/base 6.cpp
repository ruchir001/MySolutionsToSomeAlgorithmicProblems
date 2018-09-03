#include<iostream>
#include<algorithm>
#include<bitset>
#include<string.h>
#include<stdio.h>
#include<sstream>
using namespace std;

int fromDeci(int base, int inputNum)
{
    int ix = 0;
    while (inputNum > 0)
    {
        ix= ix+(inputNum % base);
        inputNum /= base;
    }


    return ix;
}

int main()
{

int n;
    cin>>n;
int a[n];    string in;
cin>>in;

 std::stringstream ss(in);

    int x=0,i;

    while (ss >> i)
    {
a[x]=fromDeci(6,i);
x++;

        if (ss.peek() == ',')
            ss.ignore();
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
