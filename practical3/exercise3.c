#include <stdio.h>
#include <math.h>

int main(void) {
    int i = 5, N = 12; 
    double sum = 0; 
    double a=0;
    double b_rad = M_PI / 3;
  

    // A while loop running from i = 5 to i < 60, incrementing by 5 each iteration
    while (i < 60) {
        sum += 2 * tan(i * M_PI / 180); 
        i += 5; 

        // Check if the current value of i is even using modulo operation
        if (i % 2 == 0) {
            printf("I am even and here's the value of sum: %f\n", sum); 
        }
    }
    printf("The value of sum after the loop is: %f\n", sum);

    // Calculate the final value of sum adjusting by a factor
    sum = (b_rad - a) / (2 * N) * sum;
    printf("The final value of the sum is: %f\n", sum);
    printf("The actual value is %f\n", log(2));

    // Calculate and print the absolute and relative difference between computed sum and actual value
    double abs_diff = fabs(sum - log(2));
    double rel_diff = fabs((sum - log(2)) / log(2));
    printf("abs_diff = %f\nrel_diff = %f\n", abs_diff, rel_diff);

    return 0;
}

