#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'A';                       // single char, %c
    char b[] = 'Alpin';                 // array of chars, %s

    // Display more digits by %0.15f, where 15 is the number of significands to display.
    float c = 3.141592;                 // FP32 (4-byte), 6-7 significand, %f
    double d = 3.141592653589793;       // FP62 (8-byte), 15-16 significand, %lf

    bool e = true;                      // true/false (1-byte), needs <stdbool.h>, %d

    // use ascii table and print a letter with %c, storing more than the max will overflow to the smallest value
    char f = 100;                       // integer (1-byte) between -128 to +127, %d or %c
    unsigned char g = 255;              // integer (1-byte) between 0 to 255, %d or %c

    // also `short int` and `unsigned short int`
    short h = 32767;                    // integer (2-byte) between -2^15 and {2^15}-1, %d
    unsigned int i = 65535;             // integer (2-byte) between 0 and {2^16}-1, %d

    // aka `long int`, usually omitted
    int j = 2147483647;                 // integer (4-byte) between -2^31 and {2^31}-1, %d
    unsigned int k = 4294967295;        // integer (4-byte) between 0 and {2^32}-1, %u

    // add `U` at the end of ULL int to display correctly
    long long int l = 9223372036854775807;   // integer (8-byte) between -2^63 and {2^63}-1, %lld
    unsigned long long int m = 9223372036854775807U; // integer (8-byte) between 0 and {2^64}-1, %llu

}