#include<stdio.h>
int sum(int x)
{
    int num=x,y,s=0;
    while(num)
    {
        y=num%10;
        s+=y;
        num/=10;
    }
    return s;
}
void main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=sum(a);
    printf("Sum of the digits is: %d",b);

}