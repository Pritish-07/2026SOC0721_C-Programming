/* This program implements a simple menu-driven calculator that performs basic arithmetic operations:
addition, subtraction, multiplication, and division by getting input from the user */
#include <stdio.h>
int main() {
    int choice; // variable to store user's choice
    float num1, num2, result; // variables to store two numbers and the result
    do// Starting a do-while loop to allow the user to perform multiple calculations until they choose to exit
    {
        /* Display menu options to the user.
        The menu includes options for addition, subtraction, multiplication, and division 
        it also includes an option to exit */ 
        printf("\n-----Menu-Driven Calculator-----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");// Prompting the user to enter their choice of operation
        scanf("%d", &choice); // Reading the user's choice and storing it in the variable 'choice'
        if(choice == 5) { // check if the user wants to exit
            printf("Exiting the calculator. Goodbye!\n");// Printing a goodbye message before exiting the program
            break; // exit the loop and end the program
        }
        if (choice >=1 && choice <=4) { // check if the choice is valid between 1 and 4
            // Prompt user to enter two numbers
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2); //reading two numbers from the user and storing them in num1 and num2
        } else {
            printf("Invalid choice! Please select a valid option.\n");// Printing an error message if the user enters an invalid choice
            continue; // skip to the next iteration of the loop
        }
        // Perform the selected operation based on user's choice
        switch(choice)// Using a switch statement to perform the operation based on the user's choice
         {
            case 1:
                result = num1 + num2; // addition operation
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2; // subtraction
                printf("Result: %.2f\n", result);
                break;
            case 3:
                result = num1 * num2; // multiplication
                printf("Result: %.2f\n", result);
                break;
            case 4:
                if(num2 != 0)  // checking if the second number iis not zero to avoid division by zero
                 {
                      result = num1 / num2; // division
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                } else // If the second number is zero, print an error message to inform the user that division by zero is not allowed
                {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:// Default case to handle any invalid choices that are not between 1 and 4
                printf("Invalid choice! Please select a valid option.\n");// Printing an error message for invalid choice
        }
    } while(choice != 5); // continue the loop until the user chooses to exit by entering 5
    return 0;// returning 0 to indicate that the program has executed successfully
}