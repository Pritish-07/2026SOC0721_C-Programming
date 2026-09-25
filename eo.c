// This Program checks whether a number is even or odd
#include <stdio.h>
int main() {
    int num;// Declare an integer variable to store the user input
    printf("Enter a number: ");// Prompt the user to enter a number
    scanf("%d", &num);// Read the user input and store it in the variable 'num'
    if (num % 2 == 0) // Check if the number is divisible by 2 (even)
    {
        printf("%d is even.\n", num);// Print that the number is even
    } else// If the number is not divisible by 2, it is odd
     {
        printf("%d is odd.\n", num);// Print that the number is odd
    }
    return 0;
}