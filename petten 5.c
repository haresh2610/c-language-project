#include<stdio.h>
int main()
{
    int i,;
    for(i=1;i<=5;i++)
    {
    for (j=1;j<=i;j++)     //1
    {
    printf("* ");
    }
    printf("\n");
    }
    
    int a,b;
    for(a=1;a<=5;a++)
    {
    for (b=5;b>=a;b--)      //2
    {
    printf("* ");
    }
    printf("\n");
    }
    
   int c,d;
    for(c=1;c<=5;c++)
    {
    for (d=1;d<=c;d++)    //³
    {
    printf("* ");
    }
    printf("\n");
    }
    
   int e,f;
    for(e=1;e<=5;e++)
    {
    for (f=5;f>=e;f--)       //4
    {
    printf("* ");
    }
    printf("\n");
    }
    
    
    int g,h;
    for(g=1;g<=5;g++)
    {
    for (h=1;h<=g;h++)    //5
    {
    printf("* ");
    }
    printf("\n");
    }
    
    int k,l;
    for(k=1;k<=5;k++)
    {
    for (l=5;l>=k;l--)       //4
    {
    printf("* ");
    }
    printf("\n");
    }
}