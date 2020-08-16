/*
Create a employee structure.
Take it's members input from the user
OR use pointers to set predefined values.
Create show function to print the inputed values.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp) {
    printf("\nInfo of employee e1 are\n");
        printf("Code of e1 -> %d\n", emp.code);
        printf("Salary of e1 -> %.2f\n", emp.salary);
        printf("Name of e1 -> %s\n", emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    
/*  
//Take input from user
        printf("Enter code of employee e1\n");
        scanf("%d", &e1.code);
        printf("Enter salary of employee e1\n");
        scanf("%f", &e1.salary);
        printf("Enter name of employee e1\n");
        gets(e1.name);
        strcpy(e1.name, gets(e1.name));
*/
    
    //Use pointer to member values for e1
    ptr->code = 100;
    ptr->salary = 23.6;
    strcpy(ptr->name, "khushi");

    show(e1);
    return 0;
}
