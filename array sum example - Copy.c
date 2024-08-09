#include<stdio.h>
#include<conio.h>
#define size 5
void main ()
{
    clrscr();
     int a[size],i,sum=0;
     for(i=0;i<=size-1;i++)
     {
         printf("enter value in %d index : ",i);
         scanf("%d ",&a[i]);
     }
     printf("\n");
     for(i=0;i<=size-1;i++)
     {
         printf("enter value in %d index is :%d,\n",i,a[i]);
         
     }
     printf("\n");
     for(i=0;i<=size-1;i++)
     {
         sum=sum+a[i];
         
         
     }
     printf("sum of array element is :%d",sum);
     getch();
     
}