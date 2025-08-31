#include<stdio.h>
void main()
{
    int a,b,q,r;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a-(q*b);
    printf("Remainder is %d",r);
}