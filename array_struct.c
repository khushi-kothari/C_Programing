/*
Create employee structure.
Use arrays to store multiple struct.
Take input of employee details from user and print it.
*/

#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[20];
};

int main()
{ 
    struct employee e[100];
    int j;
    
    printf("How many employees are there?\n");
    scanf("%d", &j);
    for (int i=0; i<j; i++) {
        printf("\nEnter the data for employee e%d\n", i+1);
        printf("Enter code of emoployee e%d\n", i+1);
        scanf("%d", &e[i].code);
        printf("Enter salary of employee e%d\n", i+1);
        scanf("%f", &e[i].salary);
        printf("Enter name of employee e%d\n", i+1);
        gets(e[i].name);
        strcpy(e[i].name, gets(e[i].name));
    }
    
    for (int i=0; i<j; i++) {
        printf("\nCode of e%d -> %d\n", i+1, e[i].code);
        printf("Salary of e%d -> %.2f\n", i+1, e[i].salary);
        printf("Name of e%d -> %s\n", i+1, e[i].name);
    }

    return 0;
}
