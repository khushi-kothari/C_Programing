/*
Print string content using %c & %s
*/

#include <stdio.h>

int main()
{
    //Both ways we can initialize string
    //char string[] = "Khushi";
    char string[] = { 'K', 'h', 'u', 's', 'h', 'i', '\0'};
    
    //don't forget to assign string's value during initialization of ptr
    char *ptr= string; 
    
    //1st way to print our string
    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    
    //More convinent way to print string
    char *ptr1 = "Convinent way to print string!";
    printf("\n%s\n" , ptr1);
    
    return 0;
}
