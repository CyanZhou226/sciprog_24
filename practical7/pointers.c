#include <stdio.h>
#include <stdlib.h> 

int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(void) {
    int size = 5; 
    int *array;   

    // dynamically allocate an array and check whether the allocation is successful
    array = allocatearray(size);

    fillwithones(array, size);

    printarray(array, size);

    freepointer(array);

    return 0;
}

// Functions that dynamically allocate arrays
int *allocatearray(int n) {
    return (int *)malloc(n * sizeof(int)); 
}

// Function to fill array
void fillwithones(int *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i] = 1; 
    }
}

void printarray(int *p, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]); 
    }
    printf("\n");
}

// Function to release dynamically allocated memory
void freepointer(int *p) {
    free(p); 
}

