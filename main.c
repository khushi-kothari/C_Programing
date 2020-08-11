//Summation of first n natural nos using recurssion

#include <stdio.h>
int sum(int n);

int main() {
    int n, result;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    result = sum(n);
    printf("Sum of %d natural nos. is %d\n", n, result);
    return 0;
}

int sum(int n) {
    if (n==0) {
        return 0;
    }
    
    else {
    int r=0;
    r += n + sum(n-1);
    return r;
    }
}
