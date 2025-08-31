#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    printf("Uppercase");
    else
    printf("Lowercase");
}