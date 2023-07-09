#include <stdio.h>

int main(){

    int age;
    
    printf("\nEnter your age: ");
    scanf("%d", &age);

    // if(age >= 18){      // greater (>), smaller (<), comparison (==)
    //     printf("You are now signed up!\n");
    // }else if(age == 0){
    //     printf("You can't sign up!\n");
    // }else if(age < 0){
    //     printf("You haven't been born yet!\n");
    // }else{
    //     printf("You're too young mate.\n");
    // }
    // return 0;

    if(age <= 0){
        printf("You haven't been born yet..\n");
    }else if(age < 18){
        printf("You're underage.\n");
    }else{
        printf("Signed up successfully.\n");
    }

    return 0;
}