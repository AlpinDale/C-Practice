#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult: %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %lf", result);
        break;  
    default:
        printf("\ninvalid operator.\n");
        break;
    }

    return 0;
}