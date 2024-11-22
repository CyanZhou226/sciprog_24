#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int factorial(int n);

int main(void) {
    int order;
    double *terms, e;

    
    printf("Enter the required polynomial order:\n");
    if (scanf("%d", &order) != 1) {
        printf("Did not enter a number\n");
        return 1;
    }

    // Dynamically allocated arrays
    terms = (double *)malloc(order * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Calculate the value of each item and store it in an array
    for (int i = 0; i < order; i++) {
        terms[i] = 1.0 / (double)factorial(i + 1);
        printf("%.16lf\n", terms[i]);
    }

    // Calculate an estimate of e
    e = 1.0;
    for (int i = 0; i < order; i++) {
        e += terms[i];
    }

    // Freeing dynamically allocated memory
    free(terms);

    printf("e is estimated as %.10lf, with difference %e\n", e, e - exp(1.0));

    return 0;
}

// Function to calculate factorial
int factorial(int n) {
    if (n < 0) {
        printf("!!! Error: negative number passed to factorial\n");
        return -1;
    } 
	else if (n == 0) {
        return 1;
    } 
	else {
        
        return (n * factorial(n - 1));
    }
}

