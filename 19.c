#include<stdio.h>
void main()
{
    int a,b,max=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    printf("Maximum number is: %d\n",max);
}