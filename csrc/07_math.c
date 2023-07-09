#include <stdio.h>
#include <math.h>

int main(){

    // square root
    double A = sqrt(9);
    printf("%lf\n", A);

    // exponenets
    double B = pow(2, 4); // 2^4
    printf("%lf\n", B);

    // round to nearest int
    int C = round(3.14);
    printf("%d\n", C);

    // round to the nearest larger int
    int D = ceil(3.14);
    printf("%d\n", D);

    // round to the nearest smaller int
    int E = floor(3.99);
    printf("%d\n", E);

    // absolute value
    double F = fabs(-100);
    printf("%lf\n", F);

    // logarithms
    double G = log(3);
    printf("%lf\n", G);

    // sin, cos, tan
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    printf("%lf\t%lf\t%lf\n", H, I, J);

    return 0;

}