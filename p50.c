#include<stdio.h>
#include<conio.h>
#define rows 3
#define columns 3
void main()
{
    int a[rows][columns],i,j,sum;
    clrscr();

    printf("\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("Enter value a[%d][%d]index:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("value of a[%d][%d]is:%d\n",i,j,a[i][j]);

        }
    }


    printf("\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            sum=sum+a[i][j];

        }
    }
    printf("sum of array element is:%d",sum);







    getch();
}