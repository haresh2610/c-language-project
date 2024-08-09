#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,row, column,n=5;
    clrscr();
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("0  ");
            }
            else
            {
                printf("#  ");
            }
        }
        printf("\n\n");
    }
    getch();
}