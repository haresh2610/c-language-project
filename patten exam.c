#include<stdio.h>

int main()

{

int i,j;

for(i=4; i>=0; i--)

{

for(j=0; j<=i; j++)

{

printf("%3C",i+96);

}

printf("\n");

}



return 0;
}
