#include <stdio.h>

int main(){
    // for loop: repeat a section of code a limited number of times

    for(int i = 1; i <= 10; i++){       // i = index, start at 1 until <= 10, and increment by 1 at each step
        printf("test\n");
    }
    for(int i = 1; i <= 10; i+=2){
        printf("%d\n", i);
    }
    for(int i = 10; i >= 1; i--){        // countdown
        printf("%d\n", i);
    }
    return 0;
}