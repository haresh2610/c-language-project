# include <stdio.h>
# include <conio.h> 
void main ()
{
     int n=7,i,j,mid;
     mid=(n/2)+1;
     for(i=1;i<=n;i++)
     { 
         for (j=1;j<=n;j++)
         {
            if (j==mid|| i==mid || i==j || j+i == n+1)
            {
              printf("* ");
            }
            else
            {
               printf("  ");
            }
              
            
         }
         printf("\n");
     }
}