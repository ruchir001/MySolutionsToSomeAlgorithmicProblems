#include <stdio.h>
#include<conio.h>
int *queue_array;
int rear = - 1;
int front = - 1;
int MAX;
void insert()
{
    system("cls");
	int add_item;
    if (rear == MAX - 1)
    {
	printf("Queue Full \n");
	getch();
	}
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element (the time of job scheduling for this item) in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    system("cls");
	if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        getch();
        front = front + 1;
    }
} 
void display()
{
	system("cls");
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        int avg=0;
        for (i = front; i <= rear; i++)
            {
			avg=avg+queue_array[i];
			}
        printf("\nthe average processing time taken per job = %d\n\n",avg/(rear+1));
        getch();
    }
} 
void main()
{
	printf("\nEnter the size of the queue: ");
	scanf("%d",&MAX);
	queue_array=malloc(MAX*sizeof(int));
    int choice;
    while (1)
    {
    	system("cls");
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display the average processing time taken per job  \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    } 
}
