#include<stdio.h>
#include<string.h>
 struct employee
{
    int id;
    char name[20];
    int sl;
};
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
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc employee.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe       

Enter the id of the employee = 1

Enter the Name of the employee = sachin

Enter the salary of the employe0e = 90000

Enter the id of the employee = 2

Enter the Name of the employee = dev

Enter the salary of the employe0e = 80000

Enter the id of the employee = 3

Enter the Name of the employee = akash

Enter the salary of the employe0e = 70000

Enter the id of the employee = 4

Enter the Name of the employee = ash

Enter the salary of the employe0e = 7070

Enter the id of the employee = 5

Enter the Name of the employee = meenakshi

Enter the salary of the employe0e = 6000


id                      name of employee                                salary


 1                      sachin                                  90000


 2                      dev                                     80000


 3                      akash                                   70000


 4                      ash                                     7070


 5                      meena                                    6000
PS F:\PROFOUND\PRACTICAL\c>
*/