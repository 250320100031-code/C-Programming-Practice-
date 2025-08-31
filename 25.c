#include<stdio.h>
#include<math.h>
void main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    printf("the square root of %.2f is %.2f\n", n, sqrt(n));
}