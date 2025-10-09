//a program to calculate rectangle area, square area. 
#include <stdio.h>

int main() {
    float length, width, side;

    // Rectangle area
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    float rectangle_area = length * width;
    printf("Area of rectangle: %.2f\n", rectangle_area);

    // Square area
    printf("Enter side length of the square: ");
    scanf("%f", &side);
    float square_area = side * side;
    printf("Area of square: %.2f\n", square_area);

    return 0;
}
