#include <stdio.h>

int main(){

    // while loop: checks condition, then executes code if true
    // do while loop: executes once, then checks condition

    int number = 0;
    int sum = 0;

    do{ 
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0){
            sum += number;      // sum = sum + number;
        }
    }while(number > 0);     // the while statement is replaced by `do`, and the while loop
                            // is moved at the end here.

    printf("sum: %d", sum);

    
    return 0;
}