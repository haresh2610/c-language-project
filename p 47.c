#include<stdio.h>
#include<conio.h>
void main()
{ 
    int n=7,i,j,mid;
    mid=(n/2)+1;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        { 
            if(j==mid || i==mid || i==1 &&j>=mid||i==n&&j<=mid||j==1&&i<=mid||j==n && i>=mid)
            {
                printf("* ");//sws
            }
            else
            {
               printf("  ");//2ws
            }
        }
        printf("\n");
    }
}