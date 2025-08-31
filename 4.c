#include<stdio.h>
void main()
{
    char name[50];
    int age;
    float marks;
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter marks: ");
    scanf("%f", &marks);
    printf("Name: %s, Age: %d, Marks: %.2f\n", name, age, marks);
}