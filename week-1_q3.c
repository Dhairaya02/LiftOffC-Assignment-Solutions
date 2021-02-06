#include<stdio.h>
#include<math.h>
void main()
{
    float r,d,c,a;
    printf("Enter the radius: ");
    scanf("%f",&r);
    d=2*r;
    c=(float)44/(float)7*r;
    a=(float)22/(float)7*pow(r,2);
    printf("Diameter is %f,Circumference %f and area of circle is %f",d,c,a);

}