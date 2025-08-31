#include<stdio.h>
void main()
{
    int a,b,m;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    m=a*b;
    while(b!=0)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    printf("LCM=%d",m/a);
}