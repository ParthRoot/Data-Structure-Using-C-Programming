#include<stdio.h>
# define max 10
int a[max];
int f = -1;
int r = -1;
void insert();
void delete1();
void display();

void main()
{
    int ch;
    while (1)
    {// use for choice
    printf("Enter your choice here:- 1)Insert, 2)Delete, 3) Display\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        printf("Insertion Operation\n");
        insert();
        break;
    case 2:
        printf("Deletion Operation\n");
        delete1();
        break;
    case 3:
        printf("Display Operation\n");
        display();
        break;
    default:
        printf("Wrong Choice");
        break;
    }
    }
}
void insert()
{
    int s, i;
    if (r == max-1)
    {
        printf("Queue is overflow");
        exit(0);

    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }

        r = r + 1;
        printf("Enter the element to be insert in queue\n");
        scanf("%d", &s);
        a[r] = s;

    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("queue is empty\n");
        exit(0);
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d,",a[i]);
        }
        printf("\n");
    }
}

void delete1()
{
    if (f == -1 || f > r)
    {
        printf("Queue is underflow");
    }
    else
    {
        printf("Deleted element: %d\n", a[f]);
        f = f + 1;
    }
}
