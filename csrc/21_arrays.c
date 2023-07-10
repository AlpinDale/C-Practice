#include <stdio.h>

int main(){

    // array: a data structure that can store many values of the same dtype

    // double prices[5];     // if we want to do declaration first and specify a fixed size
    // prices[0] = 5.0;      // initialize like this

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};    // similar to array of chars: `char name[] = 'Alpin"`

    printf("%0.2lf\n", prices[0]);  // naturally, the first element is 0th.


    return 0;

}