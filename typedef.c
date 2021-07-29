#include<stdio.h>
#include<string.h>
 typedef struct employee
{
    int id;
    char name[20];
    int sl;
}employee;
int main()
{
    int i;
   struct employee s[50];
    
     for(i=0;i<5;i++)
    {
    printf("\nEnter the id of the employee = ");
    scanf("%d",&s[i].id);
     printf("\nEnter the Name of the employee = ");
        scanf("%s",&s[i].name);
     printf("\nEnter the salary of the employee = ");
    scanf("%d",&s[i].sl);
    }
    printf("\n\nid\t\t\tname of employee\t\t\t\tsalary\n");
     printf("------------------------------------------------------------------------------------");
     for(i=0;i<5;i++)
    {
        printf("\n\n %d\t\t\t%s\t\t\t\t\t\t%d\n",s[i].id,s[i].name,s[i].sl);
         printf("------------------------------------------------------------------------------------");
    }
    return 0;
}