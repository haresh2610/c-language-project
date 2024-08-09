#include<stdio.h>
void main()

{
    int I,J,N;
    printf(" :");
    //scanf("%d",&N);
    for (I=0;I<=N;I++)
    {
        for(J=0;J<N+I;J++)
        {
        if(J<N-I-1)
        printf(" ");
        else
        printf("* ");
        
        }
        printf("\n");
    }
        int i,j,n;
    printf("enter value n :");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for(j=0;j<n+i;j++)
        {
        if(j<n-i-1)
        printf(" ");
        else
        printf("* ");
        
        }
        printf("\n");
    }
}