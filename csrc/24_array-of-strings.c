#include <stdio.h>
#include <string.h>
int main(){

    char cars[][10] = {"Mustang","Corvette","Camaro"};

    // cars[0] = "Tesla"; // won't work!
    strcpy(cars[0], "Tesla");   // make sure `string.h` is imported!

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){

        printf("%s\n", cars[i]);
    }

    return 0;

}