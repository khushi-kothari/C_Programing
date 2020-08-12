//Create a 3D array and print the address of its elements in increasing order

#include <stdio.h>

int main() {
    int array [2][3][2];
    
    printf("Address in increasing order is\n\n");
    for (int i; i<2; i++) {
        for (int j; j<3; j++) {
            for (int k; k<2; k++) {
                printf("The address of array[%d][%d][%d] = %u\n", i, j, k, &array[i][j][k]);
                //%u to print address and & means address of
            }
        }
    }
    
    return 0;
}
