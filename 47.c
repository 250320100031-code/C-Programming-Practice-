#include<stdio.h>
void main()
{
    int n;
    float x,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum+=x;
    }
    printf("Average is %f",sum/n);
}