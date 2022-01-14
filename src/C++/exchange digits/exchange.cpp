//This is The Coding Area
#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main()
{
string a;
cin>>a;
  ll b;
  cin>>b;
  ll max=INT_MAX;
   stringstream str(a);
   ll  x;
   str>>x;

  if(x<b){
  do
  {
   stringstream str(a);
   str>>x;
  if(x>b&&x<max)
    max=x;
  }while(next_permutation(a.begin(),a.end()));
  }
  else
  {
      do
  {
   stringstream str(a);
   ll  x;
   str>>x;
  if(x>b&&x<max)
    max=x;
  }
  while(prev_permutation(a.begin(),a.end()));

  }
  if(max==INT_MAX)
  cout<<"-1";
  else
  cout<<max;
}
