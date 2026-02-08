#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double num1, num2;
    int operator_selected;
    char input;
    printf("Options: +, -, *, / and ^ for exponents\n");
    printf("Enter the operator. Or enter q to quit.\n");
    scanf(" %c", &input); //gets first number or q input for quitting

    if (input == 'q' || input == 'Q') {
        printf("Exiting calculator.\n");
        return 0;
    }

        if (input == '+') {
        operator_selected = 1; // addition operator selected
    } else if (input == '-') {
        operator_selected = 2; // subtraction operator selected
    } else if (input == '*') {
        operator_selected = 3; // multiplication operator selected
    } else if (input == '/') {
            operator_selected = 4; // division operator selected
    } else if (input == '^') {
        operator_selected = 5; // exponentiation operator selected
        printf("Enter the base number: \n");
        scanf("%lf", &num1); //gets base number
        printf("Enter the exponent: \n");
        scanf("%lf", &num2); //gets exponent
        printf("Result: %lf\n", pow(num1, num2)); // calculates and prints result of exponentiation
        return 0; // exits after calculation
    } else {
        printf("Error: Invalid operator.");// operator that's not available chosen
        return 1; // exits with error code
    }

    printf("Enter the first number: \n");
    scanf("%lf", &num1); //gets first number

    printf("Enter the second number: \n");
    scanf("%lf", &num2); //gets second number

    switch (operator_selected) {
        case 1: // addition
            printf("Result: %lf\n", num1 + num2);
            break;
        case 2: // subtraction
            printf("Result: %lf\n", num1 - num2);
            break;
        case 3: // multiplication
            printf("Result: %lf\n", num1 * num2);
            break;
        case 4: // division
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // exits with error code
            }
            printf("Result: %lf\n", num1 / num2);
            break;
        default:
            printf("Error: Invalid operator selected.\n");
            return 1; // exits with error code
    }
    return 0;
}