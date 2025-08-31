#include <stdio.h>
void main() 
{
    const float PI = 3.14159; // PI is a constant
    float radius = 5.0;
    float area;
    area = PI * radius * radius;
    printf("Radius: %.2f\n", radius);
    printf("Area of circle: %.2f\n", area);
}