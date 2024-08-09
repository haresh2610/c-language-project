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
                    if(j==mid || i==mid || i==1 || i==7)
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