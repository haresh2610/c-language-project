#include<stdio.h>

void main()
{	char c;
	 
     printf("enter any alphabet");
     scanf("%c",&c);
     if(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U'||
     c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
     {
       printf("char is vowel %c",c);
     }
     else
     {
     printf("char is constant %c",c);
     } 
     


    
}