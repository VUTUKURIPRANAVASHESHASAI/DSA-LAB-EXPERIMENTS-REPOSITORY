#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    int salary;
};

int main()
{
    struct Employee e1 = {001,"mohanan",1000000};
    struct Employee e2 = {002,"mohan",1000000};
    struct Employee e3 = {003,"mohith",100000};

    printf("The details of employee 1 : \n");
    printf("Id number : %d\t", e1.id);
    printf("Name of the employee : %s\t", e1.name);
    printf("Salary : %d\t", e1.salary);
    printf("\n");
       
    printf("The details of employee 2 : \n");
    printf("Id number : %d\t", e2.id);
    printf("Name of the employee : %s\t", e2.name);
    printf("Salary : %d\t", e2.salary);
    printf("\n");
    
    printf("The details of employee 3 : \n");
    printf("Id number : %d\t", e3.id);
    printf("Name of the employee : %s\t", e3.name);
    printf("Salary : %d\t", e3.salary);
    printf("\n");
    return 0;
}