#include<stdio.h>

int num=0;
int pal(int n)
{
    int r;
    if(n)
    {
        r=n%10;
        num=num*10+r;
        n/=10;
        pal(n);
    }

    else
    return num;
    
}

void main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    int r= pal(x);
    if(x==r)
    printf("Entered number is a palindrome.");

    else
    printf("Entered number is not a palindrome.");

}