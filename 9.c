#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    if(x==y==z)
        printf("All numbers are equal\n");
    else if(x>=y && x>=z)
        printf("%d is the largest number\n",x);
    else if(y>=x && y>=z)
        printf("%d is the largest number\n",y);
    else
        printf("%d is the largest number\n",z);
}