#include<stdio.h>
 
void main()
{
    int i,j,k,n=5;
 
    printf("");
    
 
    for(i=1;i<=n;i++)
    {
        k = i;
        for(j=1;j<=i;j++,k++)
        {
            printf("%c",(char)(k+64));
        }
         printf("\n");
    }
}