#include<stdio.h>
#include<conio.h>
#define rows 3
#define columns 3
void main ()
{
     int a[rows][columns],i,j,sum=0;
     printf("\n");
     for (i=0;i<rows;i++)
     {
         for(j=0;j<columns;j++)
         {
             printf("enter value a [%d] [%d] index :\n",i,j);
             scanf("%d",&a[i][j]);
         }
     }
     printf("\n");
     for (i=0;i<rows;i++)
     {
     for (j=0;j<columns;j++)
     {
         printf("value of a[%d][%d] is :%d \n\n",j,a[i][j]);
     }
     }
     for (i=0;i<rows;i++)
     {
     for (j=0;j<columns;j++)
     {
         sum=sum+a[i][j];
         printf("%d",sum);
     }
     }
    printf("\n\n");
    printf("sum of array elements is %d",sum);
  
}