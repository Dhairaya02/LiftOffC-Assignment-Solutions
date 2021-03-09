#include<stdio.h>

void sq(float a)
{
    printf("The square is %f",a*a);
}

int main()
{
    float a;
    printf("Enter the number: ");
    scanf("%f",&a);
    sq(a);
}