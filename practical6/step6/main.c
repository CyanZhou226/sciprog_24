#include <stdio.h>

//function prototype for matmult
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main() {
    int n = 5, p = 3, q = 4;  // Matrix dimensions
    double A[n][p], B[p][q], C[n][q];  // Declare matrices A, B, and C
    int i, j, k;  // Loop indices

    // Initialize matrix A (A_ij = i + j)
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    // Initialize matrix B (B_ij = i - j)
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // Initialize matrix C to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0.0;
        }
    }

    // Perform matrix multiplication
     matmult(n,p,q,A,B,C);

    // Print matrix A
    printf("\nThis is matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nThis is matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }

    // Print matrix C
    printf("\nThis is matrix C (Result of A * B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < q; j++) {
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}


