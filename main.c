//2D array take input from the user (3*2), 3 rows 2 columns
//Print it using a function

#include <stdio.h>

void printArray(int i, int j) {
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("i=%d j=%d\n", i,j);
        }
        printf("\n");
    }
}

int main() {
    int i=3, j=2;
    int arr[3][2];
    int *ptr;
    ptr = &arr[0][0];
    
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("Enter value of %d%d\n", i+1, j+1);
            ptr++;
            scanf("%d\n", &arr[i][j]);
        }
    }
    printArray(3,2);
    
    return 0;
}
