#include<stdio.h>
#include<conio.h>
void val(int *x,int *y);
void main()
{
   int a=10 ,b =20;
   printf("\nbefor call val function\n");
   printf("%d\n",a);
   printf("%d\n",b);
   val(&a,&b);
   printf("\n after call val function\n");
   printf("%d\n",a);
   printf("%d\n",b);
   
}
void val (int *x, int *y)
{
    
    printf("\nval function call\n");
    
    *x=200;
    *y=100;
}