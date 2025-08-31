#include<stdio.h>
void main()
{
    int x,y,z,sum,avg;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    sum=x+y+z;
    avg=sum/3;
    printf("Sum: %d\n",sum);
    printf("Average: %d\n",avg);
}