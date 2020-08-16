/*
Taking input for strings using scanf, gets
And printing output with printf and puts
*/

#include <stdio.h>

int main()
{
    char string[33];
    printf("Enter your name: ");
    //Won't give space seperated input's desired output
    scanf("%s" ,string);
    printf("Your name is %s\n", string);
    
    /*
    //Uncomment this block and comment the upper part
    //to print multi-word string
    //example of gets
    char st[40];
    printf("You can enter a multi-word string: ");
    gets(st);
    //If you want to take another input, use gets again.
    printf("Your string is %s\n", st);
    */
    
    /* 
    //Example to puts
    char st[40];
    printf("You can enter a multi-word string: ");
    gets(st);
    puts(st); //print string without using printf
    */

    return 0;
}
