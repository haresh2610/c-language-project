#include<stdio.h>
#include<conio.h>

void main ()
{
		int i,start,end;
        clrscr();
        
        printf("enter start value :");
        scanf("%d",& start);
        printf("enter end value :");
        scanf("%d",&end);
        
      i=end;
        while(i>=start)
        
        { 
        printf("%d\t",i);
        i=i-1;
        }
        getch();

}