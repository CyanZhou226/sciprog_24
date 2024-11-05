#include <stdio.h>
#include <math.h>

double tan_values[13];
double degrees_to_radians(double degrees);
double calculate_area();

int main() {
    // Populate the array with tan values
    for (int i = 0; i <= 12; i++) {
        double degrees = i * 5;
        double radians = degrees_to_radians(degrees);
        tan_values[i] = tan(radians);
    }

    printf("tan values from 0 to 60 degrees:\n");
    for (int i = 0; i <= 12; i++) {
        printf("tan(%d degrees) = %f\n", i * 5, tan_values[i]);
    }
    double area = calculate_area();
    printf("Area under the curve from 0 to 60 degrees: %f\n", area);
    return 0;
}


// convert degrees to radians
double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

// calculate area under the curve using the trapezoidal rule
double calculate_area() {
    double area = 0.0;
    double width = 5 * M_PI / 180; 
    for (int i = 0; i < 12; i++) {
        area += (tan_values[i] + tan_values[i + 1]) / 2 * width;
    }
    return area;
}
