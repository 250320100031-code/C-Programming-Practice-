#include<stdio.h>
void main()
{
    int a,b,c,max,min;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    max=a,min=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    printf("Maximum=%d\nMinimum=%d",max,min);
}