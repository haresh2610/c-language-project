#include<stdio.h>
void main ()
{
 	int n1,n2,n3;
     printf("exter any three numbers :");
     scanf("%d %d %d",n1,n2,n3);
     if (n1>n2&& n1>n3)
     {
     printf("%d is maximum",n1);
     }
     else
     if (n2>n1&&n2>n3)
     {
     printf("%d is maximum",n2);
     }
     else
     {
     printf("%d is maximum",n3);
     }


}