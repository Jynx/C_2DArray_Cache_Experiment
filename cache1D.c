#include <stdio.h>
#include <stdlib.h>
#define arrSize 2000000

int* intArray;

int main(int argc, char *argv[]) {

    intArray = (int*)malloc(sizeof(int) * arrSize);
    if (!intArray) {
        fprintf(stderr, "Could not allocate memory.\n");
        exit(1);
    }
    int i;
    for (i = 0; i < arrSize; i++) {
        intArray[i] = -3; 
    }
    free(intArray);
    return 0;    
}