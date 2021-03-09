#include<stdio.h>
int c=0;
int lcm(int a,int b)
{
    if(c==0)
    c=a>b?a:b;

    if (c%a==0 && c%b==0)
    return c;
    else
    {
        c=c+1;
        lcm(a,b);
    }

}
int hcf(int a,int b)
{
    int r;
    int s=a<b?a:b;
    int l=a<b?b:a;
    if(l%s==0)
    return s;

    else
    {
        r=l%s;
        hcf(s,r);
    }
}
void main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    int l=lcm(a,b);
    int h=hcf(a,b);
    printf("The lcm is: %d\n",l);
    printf("The hcf is: %d\n",h);
}