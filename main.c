/*
 Write a program to change the value of a variable to 10 times its original value.
 Write a function and pass value by refrence.
 */

#include <stdio.h>
void multiplier(int *ptr);

int main() {
    int i=4;
    printf("Value of i is 4\n");
    
    multiplier(&i);
    
    return 0;
}

void multiplier(int *ptr) {
    printf("The value of i in function is %d\n", *ptr);
    printf("10 times of i is %d\n", (*ptr)*10);
}
