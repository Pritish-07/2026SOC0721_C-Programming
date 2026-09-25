// This program checks whether a number is positive, negative, or zero
#include <stdio.h>
int main() {
    int num; // Declare an integer variable to store the user input
    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%d", &num); // Read the user input and store it in the variable 'num'
    if (num > 0) { // Check if the number is greater than zero (positive)
        printf("%d is positive.\n", num); // Print that the number is positive
    } else if (num < 0) { // Check if the number is less than zero (negative)
        printf("%d is negative.\n", num); // Print that the number is negative
    } else { // If the number is neither positive nor negative, it must be zero
        printf("The number is zero.\n"); // Print that the number is zero
    }
    return 0; // Return 0 to indicate successful execution of the program
}