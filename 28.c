#include<stdio.h>
void main()
{
    int n,pos;
    scanf("%d%d",&n,&pos);
    n |=(1<<pos);
    printf("%d",n);
}