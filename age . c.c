#include<stdio.h>

void main()
{
    int age ;
    
    printf("enter your age:");
    
    scanf("%d",&age );
    if (age>=1&& age<=100)
    {if (age >= 18)
    {
    printf("eligible for vote ");
    }
    else
    {
    printf("invalid age ");
    }
    }
}