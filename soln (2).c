//a program to find average of 3 numbers.
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    float average = (a + b + c) / 3;

    printf("Average: %.2f\n", average);

    return 0;
}
