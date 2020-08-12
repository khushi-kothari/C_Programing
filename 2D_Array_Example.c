//Create an array of size 3 X 10 containing multiplication tables of 2, 7 & 9 resp.

#include <stdio.h>

void printTable(int *table, int num, int n) {
    printf("Multiplication Table of %d is: \n",num);
     for (int j=0; j<n; j++) {
            table[j] = 2*(j+1);
        }
        
        for (int j=0; j<n; j++) {
            printf("%dX%d = %d\n", num, j, table[j]);
        }
    printf("********************************************************\n\n");
}

int main() {
    int table[3][10];
    
    printTable(table[0], 2, 10);
    printTable(table[1], 7, 10);    
    printTable(table[2], 9, 10);    
    
    return 0;
}
