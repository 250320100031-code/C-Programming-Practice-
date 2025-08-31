#include<stdio.h>
void main()
{
    float p,r,t;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f",&p,&r,&t);
    printf("CI= %.2f\n",p*(pow((1 + r / 100), t)-p));
}