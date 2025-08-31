#include<stdio.h>
void main()
{
    const PI=3.14;
    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("Area=%.2f\n Circ=%.2f",PI*r*r,2*PI*r);
}