// program to swap two numbers using a temporary variable
#include <stdio.h>
int main() {
    int a,b,s;// declare three integer variables a, b, and s
    printf("Enter two numbers: ");// prompt user to enter two numbers
    scanf("%d %d", &a, &b);// read two integer numbers from user input and store them in a and b
    printf("Before swapping: a = %d, b = %d\n", a, b);// print the values of a and b before swapping
    s = a; // store the value of a in temporary variable s
    a = b; // assign the value of b to a
    b = s; // assign the value of temporary variable s to b
    printf("After swapping: a = %d, b = %d\n", a, b);// print the values of a and b after swapping
    return 0;
}