//Check if the given year is a leap year or not
/*
 => To determine whether a year is a leap year, follow these steps:
 1. If the year is evenly divisible by 4, go to step 2. ...
 2. If the year is evenly divisible by 100, go to step 3. ...
 3. If the year is evenly divisible by 400, go to step 4. ...
 4. The year is a leap year (it has 366 days).
 5. The year is not a leap year (it has 365 days).
 */

#include <stdio.h>

int main() {
    int year;
    
    printf("Enter a year as YYYY\n");
    scanf("%d", &year);
    
    if((year%4 == 0 && year%100 == 0 && year%400 == 0) || (year%4 == 0 && year%100 != 0 )) {
        
        printf("%d is a leap year\n", year);
    }
    
    else {
        printf("%d is not a leap year\n", year);
    }
    
    return 0;
}
