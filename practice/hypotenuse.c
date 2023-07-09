#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;

    printf("This program will find the hypotenuse of a triangle.\nEnter side A: ");
    if (scanf("%lf", &A) != 1) {            // the if statements are for validating the input, ignore
        printf("Invalid input for A\n");    // them. Only `scanf("%lf", &A)` is required.
        return 1;                           // don't forget the `&` or it'll segfault.
    }


    printf("Enter side B: ");
    if (scanf("%lf", &B) != 1) {
        printf("invalid input for B\n");
        return 1;
    }

    C = sqrt(A * A + B * B);

    printf("The hypotenuse of the triangle is %lf\n", C);

    return 0;

    // double A, B, C;

    // printf("Enter side A: ");
    // scanf("%lf", &A);

    // printf("Enter side B: ");
    // scanf("%lf", &B);

    // C = sqrt(A*A + B*B);

    // printf("Side C: %lf", C);

    // return 0;
}