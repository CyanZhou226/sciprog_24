#include<stdio.h>
#include<math.h>

float artanh1(float x, float delta);
float artanh2(float x);

int main(void){

int i, length = 1000;
float delta, x;

float results1[length];
float results2[length];

printf("Please enter a positive real number\n");
scanf("%f", &delta);

if (delta < 0){
     printf("Delta was negative\n");
     return 1;
}

i = 0;

for (x = -0.9; x <= 0.9 && i < length; x += 0.01) {
     results1[i] = artanh1(x, delta);
     results2[i] = artanh2(x);
     printf("the difference at x = %.2f is %.10f\n", -0.9 + i * 0.01, fabs(results1[i] - results2[i]) / results2[i]);
     i++;
}

return 0;
}

// calculate arctanh using the Maclaurin series approximation

float artanh1(float x, float delta) {
    float sum = 0.0;
    float term = x;
    int n = 0;
    while (fabs(term) > delta) {
        sum += term;
        n++;
        term = pow(x, 2 * n + 1) / (2 * n + 1);
}
    return sum;
}

// calculate arctanh using the natural logarithms formula

float artanh2(float x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}