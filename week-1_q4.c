#include<stdio.h>

void main()
{
    float p,c,b,m,cs,per;
    char g;
    printf("Enter the marks of p,c,b,m,cs: ");
    scanf("%f %f %f %f %f",&p,&c,&b,&m,&cs);
    per=(p+c+b+m+cs)/5;
    if (per>=90)
    g='A';
    else if (per>=80)
    g='B';
    else if (per>=70)
    g='C';
    else if (per>=60)
    g='D';
    else if (per>=40)
    g='E';
    else
    g='F';
    printf("Grade %c",g);
    
}