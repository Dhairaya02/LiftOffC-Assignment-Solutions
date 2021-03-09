#include<stdio.h>

int fac(int x)
{

    if(x!=1)
    return x*fac(x-1);

    else
    return 1;
    
}
void main()
{
    int x,f;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x==0)
    f=1;
    else
    f=fac(x);
    printf("%d",f);
}