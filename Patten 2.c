#include <stdio.h>
#include <conio.h>
void main ()

{     clrscr ();
      int i,j, row,colum;
      printf("enter no of row :");
      scanf("%d",&row);
      printf("enter no of colum :");
      scanf("%d",&colum);
      printf("\n \n");
     for(i=1;i<=row;i++)
     {
         for (j=1;j<=colum;j++)
         
         {
         printf("%d ",i);
         }
         {
         printf("\n");
         }
         
         
         getch();
     }
}