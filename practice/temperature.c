#include <stdio.h>
#include <ctype.h>  //string funcs

int main(){
    char unit;
    float temp;

    printf("\nTemperature unit (C or F): ");
    scanf("%c", &unit);

    unit = toupper(unit);       // to prevent errors when using lowercase.

    if(unit == 'C'){
        printf("Enter your temp: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The Temperature in Fahrenheit is %.1f\n\n", temp);
    }else if(unit == 'F'){
        printf("Enter your temp: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The Temperature in Celsius is %.1f\n\n", temp);
    }else{
        printf("The %c unit is invalid.\n", unit);
    }

}