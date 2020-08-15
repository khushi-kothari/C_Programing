/*
Write your own version of strlen function from <string.h>.
*/

#include <stdio.h>

int strlen(char *st) {
    int l=0;
    char *ptr = st;
    
    while(*ptr != '\0') {
        l++;
        ptr++;
    }
    return l;
}

int main()
{
    char st[] = "Khushi";
    int l = strlen(st);
    printf("The length of the string is %d \n", l);
    
    return 0;
}
