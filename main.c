//fibonacci seq using recurssion
//0,1,1,2,3,5,8,13,..

#include <stdio.h>

int fib(int n);

int main() {
    int sequence, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Sequence is ");
    
    for(int i=1;i<=n;i=i+1)
    {
        sequence=fib(i) ;
        printf("%d,", sequence);
    }
    
    return 0;
}

int fib(int n) {
    if (n==1) {
        return 0;
    }
    
    else if (n==2) {
        return 1;
    }
    
    else {
        return fib(n-1) + fib (n-2);
    }
}
