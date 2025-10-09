//a program to add 2 numbers and multiply the answer with 6.7 and show the answer in floating value after point 3 digits.
#include <stdio.h>

int main() {
    float a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Add and multiply
    float result = (a + b) * 6.7;

    // Display result with 3 decimal places
    printf("Final result: %.3f\n", result);

    return 0;
}
