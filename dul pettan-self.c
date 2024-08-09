#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<=15; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }    
        int a,b;
       for(a=1; a<=15; a++)
    {
        for (b=15; b>=a; b--)
        {
            printf("* ");
        }
        printf("\n");
        
        
    }

}