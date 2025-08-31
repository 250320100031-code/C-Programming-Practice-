#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d",sum);
}