#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    while(b)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    printf("GCD is %d",a);
}