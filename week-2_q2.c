#include<stdio.h>

void main()
{
    int n,s=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if((i+1)%2==0)
        s+=arr[i];
        else if (arr[i]%2==0)
        s+=arr[i];
    }
    printf("The sum of elements is: %d",s);

}