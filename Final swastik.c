#include<stdio.h>
#include<conio.h>
void main ()
{
    int no=7,i,j,mid;
    mid=(no/2)+1;
    clrscr();
        
        for(i=1;i<=no;i++)
        {
            for(j=1;j<=no;j++)
            {
                    if(j==mid || i==mid || i==1 && j>=mid || i==7 && j<=mid || j==1 && i<=mid || j==7 && i>=mid)
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
       
     getch();
}