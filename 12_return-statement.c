#include <stdio.h>

double square(double x){        // instead of void, we'll change to returned dtype
    // double result = x * x;
    // return result;
    return x * x;
}

int main(){
    
    // return = returns a value back to a calling function

    double x = square(3.14);
    printf("%lf", x);

    return 0;       // 0 is exit status
}