#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(b>0)
    {
        printf("%d",a%b);
    }
    else
    {
        printf("Invalid input");
    }
}