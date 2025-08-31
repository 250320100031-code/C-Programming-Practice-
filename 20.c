#include<stdio.h>
void main()
{
    float km;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    printf("%.2f kilometers = %.2f miles\n", km, km * 0.621371);
}