// This program demonstrates operator precedence and associativity in C programming
#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 2,result1,result2;// Declaring and initializing three integer variables a, b, and c with values 10, 5, and 2 respectively. Also declaring two integer variables result1 and result2 to store the results of operations.
    result1= a + b * c; // Performing multiplication first due to operator precedence, then addition. The result is stored in result1.
    result2= (a + b) * c; // Performing addition first due to parentheses, then multiplication. The result is stored in result2.
    printf("Result of a + b * c: %d\n", result1);// Output:25
    printf("Result of (a + b) * c: %d\n", result2);// Output:30
    int x = 5, y = 10, z = 15;// Declaring and initializing variables for logical operations
    int logicalResult1 = (x < y) && (y < z); // Evaluating logical AND operation. Both conditions are true, so logicalResult1 will be 1 (true).
    printf("Result of (x < y) && (y < z): %d\n", logicalResult1);// Output:1(true)
    return 0;
}