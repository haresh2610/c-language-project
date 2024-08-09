#include<stdio.h>

void main()
{
    int year ;
    printf("enter year");
    scanf("%d",& year);
    if (year % 4==0)
    {
    printf("%d leap year", year);
    }
    else
    {
    printf("% d is not leap year", year);
    }
}