#include<stdio.h>

void  main()
{ 	int i,n, start ,end;
	printf("enter stsrt value :");
		scanf("%d",& start);
        printf("enter end value :");
    	scanf("%d",&end);
        i=start ;
        while(i<=end)
        {
        printf("%d\t",i);
        i=i+1;
        }
}