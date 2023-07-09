#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the circle's radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);     // for some reason doesn't compile. Use `gcc circle.c -o circle -lm`

    printf("circumference: %lf\n", circumference);
    printf("area: %lf\n", area);     
    return 0;
}
