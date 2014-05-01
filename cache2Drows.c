#include <stdio.h>
#include <stdlib.h>
#define arrRow 2000
#define arrCol 1000

int** intArray;

int main(int argc, char *argv[]) {
    intArray = (int**)malloc(sizeof(int *) * arrRow);
    if (!intArray) {
        fprintf(stderr, "Could not allocate memory.\n");
        exit(1);
    }

    // moved this allocation outside of the iteration loops to 
    // create cleaner, consistent results at the cost of slower operation.
    // by isolating the loops that iterate through the arrays and mallocing
    // outside of those loops. 

    int i, j;
    for(i = 0; i < arrRow; i++) {
        intArray[i] = (int*) malloc (sizeof(int) * arrCol);
        if (!intArray[i]) {
            fprintf(stderr, "Could not allocate memory.\n");
            exit(1);
        }
    }
    for (i = 0; i < arrRow; i++) {
        for (j = 0; j < arrCol; j++) {
            intArray[i][j] = -3;
        }      
    }
    return 0;
}   