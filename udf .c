#include<stdio.h>
#include<conio.h>
void add (int a,int b);
void main ()
{
    int x,y;
    clrscr ();
    printf("enter value 1:");
    scanf("%d",&x);
    
    printf("enter value 2:");
    scanf("%d",&y);
    
    add( x,y);
    getch();
}
 void add (int a,int b)
 {
     int c;
     c=a+b;
     printf("addition %d",c);
 }