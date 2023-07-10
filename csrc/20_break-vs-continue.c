#include <stdio.h>

int main(){

    // continue: skips the rest of the code and forces the next iteration of the loop
    // break: exits a loop or switch

    for(int i = 1; i <= 20; i++){
        if(i == 13){            // skips number 13
            continue;           // replace with `break` to stop printing once we reach 13
        }
        printf("%d\n", i);
    }    
    return 0;

}