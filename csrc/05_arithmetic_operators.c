#include <stdio.h>

int main(){

    // arithmetic operators

    // +    addition
    // -    subtraction
    // *    multiplication
    // /    division
    // %    modulus
    // ++   increment
    // --   decrement

    int x = 5;
    int y = 2;

    int a = x + y;  // applicable to addition and subtraction

    int b = x / y;  // only integer output, i.e. no decimals

    float c = x / (float) y;    // integer division with float output, divisor needs to be float

    int d = x % y;      // modulus, displays remainder

    x++;    // increment by 1
    x--;    // decrement by 1
    
    // augmented assignment operators
    x += 3; // increment by 3, same as `x = x + 3`
    x -= 3; // increment by 4, same as `x = x - 3`
    x *= 3; // multiply by 3, same as `x = x * 3`
    x /= 3; // divide by 3, same as `x = x / 3`
    x %= 3; // modulo 3, same as `x = x % 3`

}