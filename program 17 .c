#include<stdio.h>
#include<conio.h>
void main ()
{
    int i ,start ,end ;
    clrscr ();
    printf("enter start number :");
    scanf("%d",&start);
    printf("enter end number :");
    scanf("%d",&end);
    for (i=end;i>=start;i=i-1)
    if(i%2==0)
    {
    printf("%d\t",i);
    }
     getch();
}