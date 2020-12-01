#include<stdio.h>
#include<conio.h>
#define max 50
int a[max],n,i,j,s;
void linear_search();
void binary_search();
void sort();
void main()
{
    int ch;
    printf("Enter the maximum length of array\n");
    scanf("%d", &n);

    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    while(1)
    {

        printf("Enter the Searching Element\n");
        scanf("%d", &s);
        printf("Enter the choice here:-1) Linear_Search 2) Binary Search\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                printf("Linear Search Method\n");
                linear_search();
                break;
            case 2:
                printf("Binary Search Method\n");
                sort();
                binary_search();
                break;
            default:
                printf("Wrong Choice\n");
                break;

        }
    }
}
void binary_search()
{
    int mid, l, h, f = 1;
    l=0;
    h = n;
    mid = (l+h)/2;
    while(l<=h)
    {
        mid = (l+h)/2;
        if (s == a[mid])
        {
            printf("Search Successfully\n");
            printf("Position:- %d\n", mid+1);
            break;

        }
        else if(s < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }


    }


    if (l>h)
    {
      printf("Search Unsuccessfully\n");
    }
}

void sort()
{
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
void linear_search()
{
    int f = 0;
    for(i=0;i<n;i++)
    {
        if(s == a[i])
        {
            printf("Search Successfully\n");
            printf("Position:-%d\n", i+1);
            f = 1;
            break;
        }
    }
    if(f == 0)
    {
        printf("Search Unsuccessfully\n");
    }

}
