#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='0' && c<='9')
        printf("Digit");
    else
        printf("Not a Digit");
}