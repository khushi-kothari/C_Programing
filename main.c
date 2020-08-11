/*
 Write a program to see if student passes or fails. If total of 40% is requried and minimum of 33% in each subject to pass. Assume 3 subjects.
 */


#include <stdio.h>

int main() {
    double Msub1, Msub2, Msub3, result;
    
    printf("Enter your marks in subject 1\n");
    scanf("%lf", &Msub1);
    
    printf("Enter your marks in subject 2\n");
    scanf("%lf", &Msub2);
    
    printf("Enter your marks in subject 3\n");
    scanf("%lf", &Msub3);
    
    result = ((Msub1 + Msub2 + Msub3)/3);
    
    if((Msub1 >= 33 && Msub2 >= 33 && Msub3 >= 33) && result >= 40) {
        printf("You pass!\n");
    }
    else {
        printf("You fail!\n");
    }
    
   /*
    or I also write like
    
    if((result<40) || Msub1<33 || Msub2<33 || Msub3<33){
        printf("You fail!\n");
    }
    else{
        printf("You pass!\n");
    }
    */
    return 0;
}
