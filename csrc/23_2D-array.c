#include <stdio.h>

int main(){

    // 2D array: an array where each element is an entire array
    // useful for matrices, grids, and tables

    // int numbers[2][3] = {                 // first square bracket for max number of arrays (rows), second for
    //                     {1, 2, 3},        // max elements within each array
    //                     {4, 5, 6}
    //                     };
    

    // alternatively, we could split the declaration and initialization
    int numbers[2][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);  // to make the for loop flexible for mutable arrays
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\ncolumns: %d\n", rows, columns);   // confirmation

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;

    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    // we add these later, let's see if we can make the for loop below more flexible
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    // to display elements, we use nested loops

    for(int i = 0; i < rows; i++){     // 2 being the number of arrays (rows), later replaced by flexible `rows`
        for(int j = 0; j < columns; j++){ // 3 being the number of columns, later replaced by flexible `columns`
            printf("%d ", numbers[i][j]);

        }
        printf("\n");
    }


    return 0;

}