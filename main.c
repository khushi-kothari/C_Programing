/* Write a program to find the area of rectangle
(a) Hard code input
(b) Take input from the users. */

#include <stdio.h>

int main() {
    float length = 7, breadth = 3.5;
    printf("Area of rectangle is %f\n", length*breadth);
    
    //Will go for part b in the same program
    printf("Enter the value of length\n");
    scanf("%f" ,&length);
    printf("Enter the value of breadth\n");
    scanf("%f" ,&breadth);
    
    printf("Area of rectangle is %f\n", length*breadth);
    return 0;
}
