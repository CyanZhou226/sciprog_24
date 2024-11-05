#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    if (n >= 0) printf("%d ", a);
    if (n >= 1) printf("%d ", b);
    for (int i = 2; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

