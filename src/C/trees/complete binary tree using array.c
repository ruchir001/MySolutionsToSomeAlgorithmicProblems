#include<conio.h>
#include<stdio.h>
int arr[100],count,i,num;
void inorder(int pos) //pos is the position of the root node.
{
int i,j;
i = 2*pos + 1;
if(arr[i] != 0)
inorder(i);
printf("\t %d",arr[pos]);
j = 2*pos +2;
if(arr[j] != 0)
inorder(j);
}
void insert()
{
printf("enter element");
scanf("%d",&num);
arr[count] = num;
count++;
}

void deletex()
{
printf("\n enter the element to be deleted");
scanf("%d",&num);
for(i=0;i<count;i++)
{
if(arr[i]==num)   {
count--;
arr[i] = arr[count];
arr[count] = 0;
break;
}}
if(i==count)
printf("\n element not found");
}
void searchleftchild()
{
printf("\n enter the element to be searched ");
scanf("%d",&num);
for(i=0;i<count;i++)
{
if(arr[i]==num)   
{
printf("\n element found");
if((2*(i)+1)>=count)
printf("\nThere is no left child of this node ");
else
printf("\nAnd the left child of the given node is %d",arr[2*i+1]);
break;
} 
}
if(i==count)
printf("\n element not found!!");
}
void main()
{
int choice;
count = 0;
do
{
printf("\n1.Insert into tree \n2.delete from tree \n3.Left child of an element in tree \n");
printf("4.Inorder traversal\n5.Exit \n\nEnter Your Choice:  ");
scanf("%d",&choice);

switch(choice)
{
case 1:	insert();
        break;
case 2:	deletex();
		break;
case 3:	searchleftchild();
		break;
case 4: inorder(0);
		break;
case 5: break;
default: printf("\nWrong choice!!");
}
}while(choice != 5);
getch();
}
