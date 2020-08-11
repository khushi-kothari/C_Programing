//To convert deg Celcius to Fahrenheit

#include <stdio.h>

int main() {
    double degCelcius;
    printf("Convert °C to °F\n");
    printf("Enter the value of degree Celcius\n");
    scanf("%lf", &degCelcius);
    printf("The conversion from %.2lf°C  is %.2lf°F\n", degCelcius, degCelcius * 9/5 +32);
    
    printf("%d\n", 3.0/9);
    return 0;
}
