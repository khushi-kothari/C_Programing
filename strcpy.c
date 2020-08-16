*
Write your own version of strcpy function.

char source[] = "Harry";
char target[20];
strcpy(target, source); => now target contains "Harry"
*/

#include <stdio.h>
#include <string.h>

void strcopy(char *source, char *target) {
    int i=0;
    
     while(source[i] != '\0'){
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
    
}

int main()
{
    char source[30];
    char target[30];
    printf("Enter a string: ");
    scanf("%s", source);
    
    strcopy(source, target);
        printf("The copied string is %s \n", target);
    
    return 0;
}
