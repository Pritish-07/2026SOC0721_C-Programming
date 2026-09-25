// C program to print multiplication table of a given number using while, do-while, and for loops
#include <stdio.h>
int main() {
    int num, i = 1; // Variable declaration
    printf("Enter a number: "); 
    scanf("%d", &num); 
    // Using while loop
    printf("\nMultiplication table of %d using while loop:\n", num); 
    while (i <= 10) { 
        printf("%d x %d = %d\n", num, i, num * i); // Print the multiplication result
        i++; 
    }
    //Using do-while loop 
    printf("\nMultiplication table using do-while loop:\n", num);
    i = 1;
    do { 
        printf("%d x %d = %d\n", num, i, num * i); 
        i++; 
    } while (i <= 10); 
    // Using for loop
    printf("\nMultiplication table of %d using for loop:\n", num); // Print multi[lication table]
    for (i = 1; i <= 10; i++) { 
        printf("%d x %d = %d\n", num, i, num * i); 
    }
    return 0; 
}