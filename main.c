/*
 Find the area of circle then
 modify the same program to find volume of cylinder
 */
#include <stdio.h>

int main() {
    double radius, pi = 3.14, height;
    printf("Enter radius of the circle\n");
    scanf("%lf" ,&radius);
    printf("Area of circle is %lf\n", pi*radius*radius);
    
    printf("Enter height of the cylinder\n");
    scanf("%lf" ,&height);
    printf("Volume of cylinder is %lf\n", pi*radius*radius*height);
    return 0;
}
