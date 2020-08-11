// Multiplication table of an number n

#include <stdio.h>

int main() {
    int n;
    //int sum =0; only if you want to find ---> Sum of nos occuring in multiplication of n
   // printf("Enter n of which you want multiplication table\n");
   // scanf("%d" ,&n);
    
    printf("Table of %d is\n" ,n);
    /*for(int i=1; i<=12; i++) {
     int result = i*n;
     sum += result;
        printf("%d * %d = %d\n", n, i, i*n);
    }
     printf("Sum of nos occuring in multiplication of n is %d\n");
     */

//Reverse mul table
    for (int i=10; i; i--){
        printf("10 * %d = %d\n",i, i*n);
    }
    
    return 0;
}
