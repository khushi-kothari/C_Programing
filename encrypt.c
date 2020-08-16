/*
Write a program to encrypt a string and then to decrypt it.
*/

#include <stdio.h>
#include <string.h>

    void encrypt(char *st) {
        char *ptr = st;
        printf("Encrypted string is: ");
        for(int i=0; i<strlen(st); i++) {
            st[i] = *ptr+1; 
        //printf("%c" , *ptr+1);
        ptr++;
    }
}

int main()
{
    char st[50];
    
    printf("Enter your string: ");
    gets(st);

    char *ptr = st;
    
    /*
    for(int i=0; i<strlen(st); i++) {
    printf("Ascii value of %c is %d\n", st[i], st[i]);
    }
    */
    
    encrypt(st);
    printf("%s", st);
    
    printf("\nDecrypted string is: ");
    for(int i=0; i<strlen(st); i++) {
        printf("%c" , *ptr-1);
        ptr++;
    }

    return 0;
}
