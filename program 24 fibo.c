#include<stdio.h>

void main()
{
    int n,n1=0,n2=1,n3,I;
    printf("enter number of step :");
    scanf("%d",&n);
    if(n<=0)
    {
    	printf("please enter positive number....!");
        
    }
    else
    {
     	if(n==1)
         {
         	printf("%d",n1);
         }
         if(n==2)
         {
         	printf("%d %d",n1,n2);
         }
         else
         {
         printf("%d %d ",n1,n2);
         for (I=3; I<=n;I++)
         {
         	n3=n1+n2;
             printf("%d",n3);
             n1=n2;
             n2=n3;
             
         }
         }
    
    }
    
}