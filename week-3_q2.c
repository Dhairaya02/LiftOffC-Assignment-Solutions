#include<stdio.h>

void fac(int a)
{
    int p=1;
    while(a!=1)
    {
        p*=a;
        a--;
    }
    printf("The factorial is: %d",p);
}
void main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    fac(x);
}