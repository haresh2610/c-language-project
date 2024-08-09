#include<stdio.h>

void main()
{
    int a,b,c ;
    printf("enter value of a and b :");
    scanf("%d %d "&a &b);
    printf("before swap value of a=%d and value of b=%d"a,b);
    c=a;
    a=b;
    b=c;
    
    printf("\n after swap value of a=%d and value of b=%d"a ,b);
    
}