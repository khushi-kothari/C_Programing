//Write a program containing a function which reverses the array passed to it
#include <stdio.h>

void reverse(int *arr, int n) {
    int temp;
    
    for(int i; i<=(n/2); i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    for(int i; i<7; i++) {
        printf("The value of arr[%d] is %d\n", i+1, arr[i]);
    }
    
    return 0;
}
