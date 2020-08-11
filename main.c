// Greatest of 3 nos

#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    //left side
    if (n1 > n2){
        if(n1 > n3 && n2 == n3){
            printf("n1 is greatest and n1 = n3");
        }
        else if(n1 > n3){
            printf("n1 is greatest");
        }
        else{
            if(n3 > n1){
                if( n3> n2){
                    printf("n3 is greatest");
                }
                else {
                    if (n2 > n3) {
                        printf("Invalid case");
                    }
                }
            }
                else{
                    if (n2 > n1 && n2 > n3){
                        printf("n2 is greatest and n1 = n3");
                    }
                    else {
                        printf("n1 = n3 and greatest");
                    }
                }
            }
    }
    
    //right side
    else {
        if(n2 > n1) {
            if(n2 > n3 && n1 == n3) {
                printf("n2 is greatest and n1 = n3");
            }
            else if (n2 > n3) {
                printf("n2 is greatest");
            }
            else {
                if (n3 > n2) {
                    if (n3 > n1){
                        printf("n3 is greatest");
                    }
                    else {
                        if (n2 > n1 && n2 > n3){
                            printf("n2 is greatest and n1 = n3");
                        }
                        else {
                            printf("n1 = n3 and greatest");
                        }
                    }
                }
                    else {
                        printf("n2 = n3 and greaatest");
                    }
            }
        }
        else if (n3 > n1 && n3 > n2) {
            printf("n3 is greatest and n1 = n3");
        }
        else {
            printf("n1 = n2 = n3");
        }
    }
    
    return 0;
}
