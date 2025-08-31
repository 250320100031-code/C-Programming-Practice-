#include<stdio.h>
void main()
{
    int n,a=0,b=1,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}