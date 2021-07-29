#include<stdio.h>
union ustud      // size allocate the largest data size
{
    int rollno;
    char name[10];
    float fees;
    char subject[12];
}ustudent;

struct sstud     // size allocate the sum of all datatype size present in struct
{
    int rollno;
    char name[10];
    float fees;
     char subject[10];
   
}sstudent;
int main()
{
    printf("\n The size of union stud is = %d byte ",sizeof(ustudent));
    printf("\n The size of struct stud is = %d byte ",sizeof(sstudent));
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc sizeofunion.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 The size of union stud is = 12 byte
 The size of struct stud is = 32 byte
PS F:\PROFOUND\PRACTICAL\c>
*/