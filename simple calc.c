#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    double num1, num2;
    char operator;
    char input[100];

    printf("Enter the first number: Or enter q to quit.\n");
    scanf("%s", input); //gets first number or q input for quitting

    if (strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) {
        printf("Exiting calculator.\n");
        return 0; // quits
    }

    num1 = atof(input); // converts input to float and stores it inside num1

    printf("Enter the second number: \n");
    scanf("%lf", &num2); //gets second number

    printf("What operator would you like to use? Options: (+, -, *, /).\n");
    scanf("%s", &operator); //gets operator

    // performing calculations
    if (operator == '+') {
        printf("The result is: %f", num1 + num2);// adds and prints the result
    } else if (operator == '-') {
        printf("The result is: %f", num1 - num2);// subtracts and prints the result
    } else if (operator == '*') {
        printf("The result is: %f", num1 * num2);// multiplies and prints the result
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("The result is: %f", num1 / num2);// divides and prints the result
        } else {
            printf("Error: Division by zero is not allowed.");// gives an error if 0 was inputed
        }
    } else {
        printf("Error: Invalid operator.");// operator that's not available chosen
    }
    return 0;
}