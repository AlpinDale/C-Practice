#include <stdio.h>

int main(){

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Good!\n");
            break;
        case 'C':
            printf("Average!\n");
            break;
        case 'D':
            printf("Okay!\n");
            break;
        case 'F':
            printf("Failed!\n");
            break;
        default:
            printf("Enter a valid grade.\n");
    }

    return 0;
}