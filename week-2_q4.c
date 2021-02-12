#include<stdio.h>

void main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    printf("Max,Min = %d,%d",max,min);
}