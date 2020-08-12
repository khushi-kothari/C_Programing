//Write a program containing a function which counts the no. of poitive numbers in an array.
#include <stdio.h>

int positive_no(int *arr, int n) {
    int num=0;
    for (int i=0; i<n; i++) {
        if (arr[i]>0) {
            num++;
            printf("Arr[%d] = %d is a postive no.\n", i, arr[i]);
    }
}
    return num;
}

int main()
{
    int arr[7] = {1, -2, 3, -4, 0, 6, 7};
    int num;
    
    num = positive_no(arr, 7);
    printf("Total number of positive integer in array are: %d\n",num);
    
    return 0;
}
