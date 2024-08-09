#include<stdio.h>
#include<conio.h>
#define size 5
void main()
{ 
    int a[size],i,sum=0;
    for (i=0;i<=size-1;i++)
    {
        printf("Enter value in %d index:",i);
        scanf("%d",&a[i]);
    }
    {
        printf("\n\n");
    }
    for (i=0;i<=size-1;i++)
    {
        printf("value of %d index is : %d\n",i,a[i]);
    }
    {
        printf("\n\n");
    }
    for (i=0;i<=size-1;i++)
    {
        sum=sum+a[i];
        printf("%d\t",sum);
    }
    printf("sum of Array Element if :%d",sum);
}