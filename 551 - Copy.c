#include<stdio.h>
#include<conio.h>
#define size 2
struct employee 
{
    int emp_id;
    char name[20];
    float salary;
    char address[20];
    int dept_no;
    int age;
};
void main ()
{
    int i;
    struct employee e[size];
    clrscr ();
    
    for(i=0;i<size;i++)
    {
        printf("Enter emp_id:");
        scanf("%d",&e[i].emp_id);
        
        printf("Enter name:");
        scanf("%s",e[i].name);
        
        printf("Enter salqry:");
        scanf("%f",&e[i].salary);
        
        printf("Enter address:");
        scanf("%s",e[i].address);
        
        printf("Enter dept_no:");
        scanf("%d",&e[i].dept_no);
        
        printf("Enter age:");
        scanf("%d",&e[i].age);
        
        printf("\n");
    }
    printf("\n\n");
    
    for(i=0;i<size;i++)
    {
        printf("id:%d\n",e[i].emp_id);
        printf("name:%d\n",e[i].name);
        printf("salqry:%d\n",e[i].salary);
        printf("address:%d\n",e[i].address);
        printf("dept_no:%d\n",e[i].dept_no);
        printf("age:%d\n",e[i].age);
        
        printf("\n");
    }
    getch ();
}