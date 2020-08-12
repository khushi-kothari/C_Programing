//Create an array of size 3 X 10 containing multiplication tables of 2, 7 & 9 resp. 

#include <stdio.h>

void printTable(int *table, int num, int till) {
    printf("Multiplication Table of %d is: \n",num);
     for (int j=0; j<till; j++) {
            table[j] = num*(j+1);
        }
        
        for (int j=0; j<till; j++) {
            printf("%dX%d = %d\n", num, j+1, table[j]);
        }
    printf("********************************************************\n\n");
}

int main() {
    int num, till, quantity;
    
    printf("How many tables you want?\n");
    scanf("%d", &quantity);
    printf("Enter till where you want multiplication table\n");
    scanf("%d", &till);
    
    int table[quantity][till];
    
    for (int i=0; i<quantity; i++) {
        printf("Enter a number you want table of\n");
        scanf("%d", &num);
        printTable(table[i], num, till);
    }
    
    return 0;
}
