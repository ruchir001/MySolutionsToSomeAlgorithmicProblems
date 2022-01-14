#include <stdio.h>
struct employee
{
    int info;  //the integer on which basis to sort
    char name[80];
};

void accept(struct employee *list, int s);
void display(struct employee *list, int s);
void bsortDesc(struct employee *list, int s);

int main()
{
    struct employee data[20];
    int n;
    printf("Number of records you want to enter? : ");
    scanf("%d", &n);
    accept(data, n);
    printf("\nBefore sorting");
    display(data, n);
    bsortDesc(data, n);
    printf("\nAfter sorting");
    display(data, n);
    return 0;
} 

void accept(struct employee list[80], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\nEnter data for Employee #%d", i + 1);
        printf("\nEnter info : ");
        fflush(stdin);
        scanf("%d", &list[i].info);
        fflush(stdin);
		printf("Enter name : ");
        gets(list[i].name);
        fflush(stdin);
    } 
}

void display(struct employee list[80], int s)
{
    int i;
    printf("\n\nName\tInfo\n\n");
    for (i = 0; i < s; i++)
    {
        printf("%s\t%d\n", list[i].name, list[i].info);
    } 
}

void bsortDesc(struct employee list[80], int s)
{
    int i, j;
    struct employee temp;
    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].info > list[j + 1].info)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}
