#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("sum: %d\n",x+y);
    printf("substraction: %d\n",x-y);
    printf("multiplication: %d\n",x*y);
    printf("division: %.2f\n",(float)x/y);
}