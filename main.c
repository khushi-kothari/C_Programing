// star pattern using function
/*
 
*
* * *
* * * * *
 for n no. of lines
 */

#include <stdio.h>
void star(int n);

int main() {
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    star(n);
    
    return 0;
}

void star(int n) {
    for (n=1; n, n++) {
        printf("*\n");
    }
}
