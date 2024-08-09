#include<stdio.h>
#include<conio.h>
void main ()
{
    int i,start,end;
    clrscr();
    printf("enter start number :");
    scanf("%d",&start);
    printf("enter end number :");
    scanf("%d",&end);
    for (i=start;i<=end;i=i+1)
    {
    if(i<=9)
    {
    printf("0%d\t",i);
    }
    else
    {
    printf("%d\t",i);
    }
    }
    getch();
} 