#include<stdio.h>
#include<string.h>
#include<conio.h>

struct stack
{
int arr[17];
int top=-1;	
};
void push(struct stack *a)           //using call by reference
{
	int num;
	scanf("%d",&num);
	a->top+=1;
	a->arr[a->top]=num;
}
int pop(struct stack *a)
{
	a->top=a->top-1;
	return(a->top);

}
int main()
{
	struct stack b;
	int i,t=1,max,j;
	for(i=0;i<17;i++)
	{
		printf("Enter the rainfall for the %d year to push into the stack : ",2000+i);
		push(&b);
	}
	t=b.top;
while(t!=-1)
	{
	

	max=t;
	for(i=t+1;i<17;i++)
	{
		if(b.arr[i]>b.arr[max])
		{
			max=i;
		}
	}
	if(max==t)
	{
		printf("\nThere is no higher rainfall in next years for the year %d\n",2000+t);
		
	}
	else
	{
		printf("\nThe highest rainfall in the next years for the year %d is in the year %d\n",2000+t,2000+max);
	}
		t=pop(&b);
}
getch();
return(0);
}
