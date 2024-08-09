#include<stdio.h>
#include<conio.h> 
void main()

{    int i, table ;
    clrscr ();
    printf("enter table value");
    scanf("%d",&table);
    i=1;
    while(i<=10)
    
    {
        printf("%d %d=%d\n",table,i, table*i);
        i=i+1;
    }
    getch();

}