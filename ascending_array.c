/*
 Create a 2D array by taking input from the user. 
 Write an increasing function to print the array in ascending order.
 */
 
#include <stdio.h>

void increasing(int *array, int n) {
    int temp;
    
    //print in ascending order
    for (int k=0; k<n; k++) {
        for (int j=k+1; j<n; j++) {
            if(array[k] > array[j]) {
                //Swap positions of arr[k] and arr[j]
                temp = array[k];
                array[k] = array[j];
                array[j] = temp;
            }
        }
    }
    
    //printing in ascending order
    printf("The value of array in ascendng order is:\n");
    for (int a=0; a<n; a++) {
        printf("%d, ", array[a]);
    }
}

int main() {
    int n=0, array[n];
    
    printf("How many element you want in your array?\n");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        printf("Enter the value of element:%d\n", i+1);
        scanf("%d", &array[i]);
    }
    
    increasing(array, n);
    
    return 0;
}
