#include<stdio.h>
#define s 2

int main()
{ 

   int a[s][s],b[s][s],i,j,n=s;
   for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    
    
   for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
         scanf("%d",&b[i][j]);
         
       }
       printf("\n");
    }
    
    
    
   for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
         printf("%d ",a[i][j]);
       }
       printf("\n");
    }
    printf("\n");
    
    
    for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
         printf("%d ",b[i][j]);
       }
       printf("\n");
    }
    
    printf("\n");
    
    for(i=0;i<n;i++)
    { 
       for(j=0;j<n;j++)
       {
         printf("%d ",a[i][j]+b[i][j]);
         //printf("%d ",a[i][j]-b[i][j]);
       }
       printf("\n");
    }
    
    return 0;
}