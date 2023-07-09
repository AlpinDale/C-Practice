#include <stdio.h>

int main(){

    // format specifier % = defines and formats a type of data to be displayed

    // %c   =   character
    // %s   =   array of chars (str)
    // %f   =   float
    // %lf  =   double
    // %d   =   integer

    // %.1  =   decimal precision
    // %1   =   minimum field width
    // %-   = left align

    float a = 2.32;
    float b = 5.00;
    float c = 59.99;

    printf("a: %.2f\nb: %.2f\nc: %.2f\n", a, b, c);
     
    printf("a: %10.2f\nb: %10.2f\nc: %10.2f\n", a, b, c);

    printf("a: %-10.2f\nb: %-10.2f\nc: %-10.2f\n", a, b, c);
}