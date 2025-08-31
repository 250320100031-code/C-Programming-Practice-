#include<stdio.h>
void main()
{
    int n,palin=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        palin=palin*10;
        palin=palin+temp%10;
        temp=temp/10;
    }
    if(palin==n)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}