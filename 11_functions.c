#include <stdio.h>

void test(char name1[], char name2[]){
    printf("\nHere's to you.");
    printf("\n%s and %s.", name1, name2);
    printf("\nRest forever here in our hearts.");
    printf("\nThe last and final moment is yours.");
    printf("\nThat agony is your triumph.\n");
}

int main(){

    char name1[] = "Nicola";
    char name2[] = "Bart";
    test(name1, name2);

    return 0;
}