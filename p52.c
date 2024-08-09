#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n=5;
   printf("\n");
   for(i=n;i>=1;i--)
   { 
      for(j=1;j<=i;j++)
      {
     // printf("* ");
      //  printf("%d",i);
      printf("%d",j);
      }
      printf("\n");
   }
}