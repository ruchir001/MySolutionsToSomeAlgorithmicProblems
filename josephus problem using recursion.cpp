#include<iostream>
using namespace std;
int joseph(int n,int k)
{
	if(n==1)
	return 1;
	else 
	return((joseph(n-1,k)+1)%n)+1;
}
int main()
{
int n,k;
cout<<"Enter the values of n and k";
cin>>n>>k;
int a[n];
cout<<"Enter the players id";
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"The winner is"<<a[joseph(n,k)-1]; //-1 as it return the value starting from 1 not the index starting from 0
}

