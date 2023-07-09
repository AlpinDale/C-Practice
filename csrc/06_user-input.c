#include <stdio.h>
#include <string.h> // to remove newline after fgets
int main(){

    char name[25];
    int a;
    // printf("Enter number: ");
    // scanf("%d", &a);
    // printf("The number is %d\n", a);

    
    printf("What's your name? ");
    fgets(name, 25, stdin);     // for whitespace in input. params: variable name, len, function
    name[strlen(name)-1] = '\0';
    printf("Your name is %s, nice\n", name);

    printf("Enter a number. ");
    scanf("%d", &a);
    printf("Well, %d is your number.\n", a);

    return 0;
}