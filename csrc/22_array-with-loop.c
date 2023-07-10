#include <stdio.h>

int main(){

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

    // we prefer using for loops when arrays have too many elements

    printf("%d bytes\n", sizeof(prices));

    // problem; if we later on add another element to the array, we won't be able to use it
    // solution; we use the `sizeof` function to get the total size of our elements in bytes
    // then divide the total by the first value in the for loop - that way we can have flexibility
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("$%0.2lf\n", prices[i]);
    }
    


}