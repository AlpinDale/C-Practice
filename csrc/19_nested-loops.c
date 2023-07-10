#include <stdio.h>

int main(){

    // nested loop: a loop within a loop

    int rows;
    int columns;
    char symbol;
    char newline;

    printf("\nEnter number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    scanf("%c", &newline);        // we use this to clear the buffer, otherwise it'll print empty space

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    

    return 0;
}