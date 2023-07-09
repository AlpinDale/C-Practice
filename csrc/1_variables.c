#include <stdio.h>

int main()
{
    printf("What the fuck\tdude.\n");
    int x = 3; // declaration + initialization
    int y = 4;

    int sum = 21;
    float gpa = 4.01;
    char grade = 'A';
    char name[] = "Alpin"; // array, not string

    // printf("%d", sum);  
    /* 
    %d = decimal 
    %s = string/char array
    %c = character
    %f = float
    */
   printf("%d, %s, %c, %f", sum, name, grade, gpa);
    return 0;
}