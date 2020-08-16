/*
Create a 2D vector using structures.
*/

#include <stdio.h>
#include <string.h>

typedef struct vector {
    float x;
    float y;
} v1;

int main()
{
    v1 v;
    printf("Enter value of X dimension\n");
    scanf("%f", &v.x);
    printf("Enter value of Y dimension\n");
    scanf("%f", &v.y);
    
    printf("\nThe value of X dimension is %.2f\n", v.x);
    printf("The value of Y dimension is %.2f\n", v.y);

    return 0;
}
