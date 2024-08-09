#include<stdio.h>
#include<conio.h>
void main ()
{
    char c;
    clrscr ();
    printf("Enter character:");
    c=getc(stdin);
    
    printf("Character is:");
    putc(c,stdout);
    getch();
}