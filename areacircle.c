//to determine the area of a circle
#include <stdio.h>
#define PI 3.14159 // define the value of PI
int main()
{
    float radius, area;// declare two float variables for radius and area
    printf("Enter the radius of the circle: ");// prompt user to enter the radius of the circle
    scanf("%f", &radius);// read the radius value from user input
    area = PI * radius * radius;// calculate the area of the circle using the formula area = PI * radius^2
    printf("Area of the circle: %f", area);// print the calculated area of the circle
    return 0;
}