#include<stdio.h>
#include<string.h>
#include<conio.h>
int ctr,i,j,t1,t2,x,m;
char arr[1000];
/*void push()
{
	int num;
	scanf("%d",&num);
	top+=1;
	arr[top]=num;
}
int pop()
{
	top=top-1;
	return(top);

}*/
int close(int t1)
{
ctr=0;
for(x=t1+1;x<m;x++)
{
	if(arr[x]==')')
	{
		if(ctr==0) return(x);
		else {
		ctr=ctr-1;}
	}
	else if (arr[x]=='(')
	{
	ctr=ctr+1;}
}
}
int main()
{

	printf("\n\nEnter the expression ");
	gets(arr);
	m=strlen(arr);
	for(i=0;i<m;i++)
	{
		if(arr[i]=='(')
		{
		t2=close(i);
		for(j=i+1;j<t2;j++)
		{
			printf("%c",arr[j]);
			
		}
		printf("\t%d\n",t2-i-1);
		}
	}


getch();
return(0);
}
