#include<stdio.h>
#include<string.h>
 struct employee
{
    int id;
    char name[20];
    int sl;
}s;
void fun(struct employee s)
{
     printf("\n\nid\t\t\tname of employee\t\t\t\tsalary\n");
     printf("------------------------------------------------------------------------------------");
   
        printf("\n\n %d\t\t\t%s\t\t\t\t\t%d\n",s.id,s.name,s.sl);
         printf("------------------------------------------------------------------------------------");
}

int main()
{
    s.id=10;
    strcpy(s.name,"sachin powar");
    s.sl=10000;
    fun(s);
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc structPassByValue.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe


id                      name of employee                                salary
------------------------------------------------------------------------------------

 10                     sachin powar                                    10000
------------------------------------------------------------------------------------
PS F:\PROFOUND\PRACTICAL\c>
*/