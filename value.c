/* this program demostrates the use of different data types
in C programming language.
*/
#include <stdio.h>
int main() {
    int a;//declare an integer variable 
    float b;//declare a float variable
    double c;//declare a double variable
    char ch;//declare a character variable
    char name[50];//declare a character array to store a string

    printf("Enter an integer:\n ");//prompt user to enter an integer
    scanf("%d", &a);//read the integer input from user and store it in variable a
    printf("Enter a float:\n ");//prompt user to enter a float
    scanf("%f", &b);//read the float input from user and store it in variable b
    printf("Enter a double:\n ");//prompt user to enter a double
    scanf("%lf", &c);//read the double input from user and store it in variable c
    printf("Enter a character:\n ");//prompt user to enter a character
    scanf(" %c", &ch);//read the character input from user and store it in variable ch
    printf("Enter your name:\n");//prompt user to enter their name
    scanf("%s", name);//read the string input from user and store it in character array name

    printf("INTEGER You entered: %d\n", a);//print the integer value entered by user
    printf("FLOAT You entered: %.2f\n", b);//print the float value entered by user
    printf("DOUBLE You entered: %.2lf\n", c);//print the double value entered by user
    printf("CHARACTER You entered: %c\n", ch);//print the character value entered by user
    printf("STRING You entered: %s\n", name);//print the string value entered by user
    return 0;
}
