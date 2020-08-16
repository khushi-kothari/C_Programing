/*
Write a program to check whether the given character is present in string or not.
If it is present, count how many times it occurs
*/

#include <stdio.h>

int main()
{
    char st[50];
    char c;
    int i, count=0;
    
    printf("Enter your string\n");
    gets(st);
    printf("Enter a character \n");
    scanf("%c", &c);
    
    for(i=0; i<strlen(st); i++) {
        if (c == st[i]) {
            count++;
        }
    }
    
    if (count == 0) {
        printf("%c doesn't belong to string", c);
    }
    
    else {
        printf("%c occurs %d times.", c, count);
    }

    return 0;
}
