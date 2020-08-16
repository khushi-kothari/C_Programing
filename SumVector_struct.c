/*
Write a function sumVector which returns the sum of two vectors passed to it.
Vectors must be 2 dimensional.
*/

#include <stdio.h>
#include <string.h>

typedef struct vector {
    float x;
    float y;
} v;

void sumVector(v v1, v v2) {
    float X = v1.x + v2.x;
    float Y = v1.y + v2.y;
    printf("Resultant vector X value is %.2f X and Y value is %.2f \n", X, Y);
}

int main()
{
    v v1, v2;
    printf("Enter value of X dimension for v1\n");
    scanf("%f", &v1.x);
    printf("Enter value of Y dimension for v1\n");
    scanf("%f", &v1.y);
    printf("Enter value of X dimension for v2\n");
    scanf("%f", &v2.x);
    printf("Enter value of Y dimension for v2\n");
    scanf("%f", &v2.y);
    
    printf("\nThe value of X dimension is %.2f\n", v1.x);
    printf("The value of Y dimension is %.2f\n", v1.y);
    printf("\nThe value of X dimension is %.2f\n", v2.x);
    printf("The value of Y dimension is %.2f\n", v2.y);
    
    sumVector(v1, v2);

    return 0;
}
