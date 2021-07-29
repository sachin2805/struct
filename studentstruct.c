#include<stdio.h>
#include<string.h>
 struct employee
{
    int rollno;
    char name[20];
    float fees;
}s[20];
int main()
{
    int i;
       for(i=0;i<10;i++)
    {
    printf("\nEnter the Roll number of student = ");
    scanf("%d",&s[i].rollno);
     printf("\nEnter the Name of student = ");
        scanf("%s",&s[i].name);
     printf("\nEnter the fees of student = ");
    scanf("%f",&s[i].fees);
    }
         printf("\n\nRollno\t\t\tname of student\t\t\t\tfees\n");
        printf("------------------------------------------------------------------------------------");

     for(i=0;i<10;i++)
    {
        printf("\n\n %d\t\t\t%s\t\t\t\t\t%f\n",s[i].rollno,s[i].name,s[i].fees);
        printf("------------------------------------------------------------------------------------");
    }
    return 0;
}
/*OUTPUT
S F:\PROFOUND\PRACTICAL\c> gcc studentstruct.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the Roll number of student = 1

Enter the Name of student = akash

Enter the fees of student = 1000

Enter the Roll number of student = 2

Enter the Name of student = sachin

Enter the fees of student = 2000

Enter the Roll number of student = 3

Enter the Name of student = dev

Enter the fees of student = 3000

Enter the Roll number of student = 4  

Enter the Name of student = ash

Enter the fees of student = 4000

Enter the Roll number of student = 5    

Enter the Name of student = meena

Enter the fees of student = 5000

Enter the Roll number of student = 6

Enter the Name of student = arti

Enter the fees of student = 6000

Enter the Roll number of student = 7

Enter the Name of student = rahul

Enter the fees of student = 7000

Enter the Roll number of student = 8 

Enter the Name of student = rohit

Enter the fees of student = 8000

Enter the Roll number of student = 9

Enter the Name of student = sakshi

Enter the fees of student = 9000

Enter the Roll number of student = 10

Enter the Name of student = shiva

Enter the fees of student = 5000


Rollno                  name of student                         fees
------------------------------------------------------------------------------------

 1                      akash                                   1000.000000
------------------------------------------------------------------------------------

 2                      sachin                                  2000.000000
------------------------------------------------------------------------------------

 3                      dev                                     3000.000000
------------------------------------------------------------------------------------

 4                      ash                                     4000.000000
------------------------------------------------------------------------------------

 5                      meena                                   5000.000000
------------------------------------------------------------------------------------

 6                      arti                                    6000.000000
------------------------------------------------------------------------------------

 7                      rahul                                   7000.000000
------------------------------------------------------------------------------------

 8                      rohit                                   8000.000000
------------------------------------------------------------------------------------

 9                      sakshi                                  9000.000000
------------------------------------------------------------------------------------

 10                      shiva                                   5000.000000
------------------------------------------------------------------------------------
PS F:\PROFOUND\PRACTICAL\c>
*/