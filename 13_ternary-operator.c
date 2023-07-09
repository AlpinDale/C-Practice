#include <stdio.h>

int findMax(int x, int y){
    // if(x > y){
    //     return x;
    // }else{
    //     return y;
    // }
    return (x > y) ? x : y;     // same as above
}

int main(){

    // ternary operator = shortcut to if/else when assigning/returning a value
    // formula: (condition) ? value if true: value if false

    int max = findMax(3, 4);

    printf("%d\n", max);

    return 0;
}