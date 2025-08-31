#include<stdio.h>
void main()
{
    int b,e,res=1;
    printf("Enter the base and exponent:");
    scanf("%d%d",&b,&e);
    for(int i=1;i<=e;i++)
    {
        res=res*b;
    }
    printf("%d",res);
}