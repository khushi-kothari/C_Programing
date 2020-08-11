/*
 Write a program having variable i.
 Print the address of i.
 Pass this variable to a function and print its address.
 Are these addreses same?
 why?
 */


#include <stdio.h>
void function(int i);

int main() {
    int i;
    
    printf("The address of i is %u\n", &i);
    function(i);
    return 0;
}

void function(int i) {
    printf("The address of i while declaring funciton is %u\n", &i);
}

// address doesn't remain same
// Because we are calling by name
