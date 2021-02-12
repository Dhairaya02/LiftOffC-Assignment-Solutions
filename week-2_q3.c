#include<stdio.h>
#include<string.h>

void main()
{
    char s[80];
    int c=0;
    printf("Enter the string: ");
    fgets(s,80,stdin);
    int l= strlen(s);
    for(int i=0;i<l;i++)
    if(s[i]==' ')
    c++;
    c++;
    printf("The number of words are: %d",c);

}