#include<stdio.h>
#define max 50
int f =-1;
int r = -1;
int a[max];
void pop();
void push();
void display();

void main()
{
    int ch;
    while(1)
    {
    printf("Enter your choice:-1) Insert, 2) Delete, 3) Display\n");
    scanf("%d", &ch);



        switch(ch)
        {
            case 1:
                printf("Push Operation\n");
                push();
                break;
            case 2:
                printf("Pop Operation\n");
                pop();
                break;
            case 3:
                printf("Display Operation\n");
                display();
                break;
            default:
                printf("Your choice is wrong\n");

        }
    }
}

void push()
{
    int s;

    if(r == max-1)
    {
        printf("Stack is overflow\n");

    }
    else
    {
        if (f == -1)
        {
            f=0;
        }
        printf("Enter the value to be insert\n");
        scanf("%d", &s);
        r = r + 1;
        a[r] = s;
    }
}

void pop()
{
    if (f == -1 || f > r)
    {
        printf("Stack is underflow\n");

    }
    else
    {
        printf("Deleted Element is :- %d\n", a[r]);
        r = r - 1;
    }
}

void display()
{
    int i;
    if(f == -1)
    {
        printf("Stack is overflow\n");

    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d,", a[i]);
            printf("\n");
        }
    }
}
