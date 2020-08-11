#include <stdio.h>

void Good_Morning(void);
void Good_Afternoon(void);
void Good_Evening(void);

int main() {
    printf("Here are the greetings of a beautiful day!\n");
    Good_Morning();
    Good_Afternoon();
    Good_Evening();
    return 0;
}

void Good_Morning() {
    printf("Good Morning :)\n");
}

void Good_Afternoon() {
    printf("Good Afternoon :D\n");
}

void Good_Evening() {
    printf("Good Evening ;)\n");
}
