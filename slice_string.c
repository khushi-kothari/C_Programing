/*
Write your own version of slice function.
Take from m to n you have to slice and print the sliced string.
Here, m and n inclusive are in sliced string.
*/

#include <stdio.h>

void strlen(char *st, int m, int n) {
    int i;
    
    while(i<n) {
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Harry";
    strlen(st, 1, 4);
        printf("The sliced string is %s \n", st);
    
    return 0;
}
