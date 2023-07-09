/*
Function prototypes
*/
#include <stdio.h>

void hello(char[], int);    // function proto, ensures that calls to function have correct args

/*
Most C compilers don't check for parameter matching
Missing args will result in unexpected behaviour
Function prototypes cause the compiler to flag an error if args are missing

ADVANTAGES:
1. Easier to navigate a program with main() at the top
2. Easier debugging
3. Commonly used in header files
*/

int main(){
    char name[] = "Alpin";
    int age = 21;

    hello(name, age);
    return 0;
}

void hello(char name[], int age){
    printf("\nHello %s", name);
    printf("\nYou are %d years old.", age);
}