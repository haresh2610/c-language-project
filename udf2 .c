#include<stdio.h>
#include<conio.h>
//no argument with return
int add1();

//with argument with return
int add2(int m,int n );
 
 void main ()
  
  {
      int x,y ,z;
      clrscr ();
      y=add1();
      getch();
      printf("add1 answer : %d",y);
      
      z=add2 (10,20);
      printf("\n add2 answer :%d",z);
  }
  
  int add1 ()
  {
      int a=10;
      int b=20;
      int c;
      c=a+b;
      return  c;
      
  }
   int add2(int m,int n )
   {
       int o;
       o=m+n;
       return o;
       
   }