#include <stdio.h>  
#include <string.h>  
struct Employee  
{     
   int id;  
   char name[20]; 
   float salary; 
   struct Date  
    {  
      int dd,mm,yyyy;     
    }doj;  
}s;  
int main( )  
{  
   //storing employee information  
   s.id=1;  
   strcpy(s.name, "SACHIN POWAR");//copying string into char array 
   s.salary=100000; 
   s.doj.dd=29;  
   s.doj.mm=07;  
   s.doj.yyyy=2021;  
  
   //printing first employee information  
   printf( "\nemployee id : %d\nemployee name : %s\nemloyee salary : %f\nemployee date of joining (dd/mm/yyyy) : %d/%d/%d\n",s.id,s.name,s.salary, s.doj.dd,s.doj.mm,s.doj.yyyy);  
    return 0;  
} 
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc nestedstruct.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

employee id : 1
employee name : SACHIN POWAR
emloyee salary : 100000.000000
employee date of joining (dd/mm/yyyy) : 29/7/2021
PS F:\PROFOUND\PRACTICAL\c> 
*/