#include <stdio.h>
#include<conio.h>
void  val(int *x,int *y);
void main()
{
    int a=10,b=20;
    printf("\nbefore call val function\n");
    printf("%d\n",a);
    printf("%d\n",b);
    val (&a,&b);
    printf("\n after call value val function\n");
    printf("%d\n",a);
    printf("%d",b);
}
    void val (int *x,int *y)
    
    {
    
    // x++;y++;
     printf("\n val function call \n");
     *x=200;
     *y=100;
      //  printf("%d\n",*x);
        //printf("%d\n",*y);
    }