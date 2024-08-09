#include<stdio.h>

void main()
{
    int a,b;
    printf("enter value of a and b:");
    scanf("%d %d , &a &b ");
    printf("before swap value of a=%d and value of b= %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap value of a=%d and value of b=%d",a,b);
}