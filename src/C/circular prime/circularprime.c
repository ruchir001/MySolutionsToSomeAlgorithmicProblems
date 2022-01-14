#include<stdio.h>
#include<string.h>
#include<stdio.h>
void permut(char *a,int s,int *d)
{
char b[s];
int i,c=0,t;
for(i=0;i<s;i++)
{
	c=0;
	t=i;
	while(c<s)
	{
	b[c]=a[t];
	t=t+1;
	c=c+1;
	if(t>=s)
	{
	t=0;
	}
	}
	d[i]=atoi(b);
}
}
int checkprime(int n)
{
if(n==2||n==3)
return(1);
else
{
int x1=(n+1)%6;
int x2=(n-1)%6;
if(x1==0||x2==0)
return(1);
else return(0);
}
}
int main()
{
char n[100];
int s,j,i; 
gets(n);
s=strlen(n);
int d[s];
permut(n,s,d);
for(i=0;i<s;i++)
{
if(checkprime(d[i])==0)
{printf("Not circular prime"); return(0);}
}
printf("Circular prime");
return(0);
}
