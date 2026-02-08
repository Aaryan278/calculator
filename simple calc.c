#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    const double E = 2.71828182845904523536;// defines euler's number
    const double PI = 3.14159265358979323846;// defines pi
    char buffer[32];
    char buffer2[32];
    double num1, num2;
    int operator_selected;
    char input;

    printf("Options: +, -, *, /, ^ and l for log. Option for natural log is later on.\n");
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
        printf("Enter the base number: \n");
        scanf("%lf", &num1); //gets base number

        printf("Enter the exponent: \n");
        scanf("%lf", &num2); //gets exponent

        printf("Result: %lf\n", pow(num1, num2)); // calculates and prints result of exponentiation

        return 0; // exits after calculation

    } else if (input == 'l' || input == 'L') { // logarithm operator selected

        printf("Enter the number to find the logarithm of: \n");
        scanf("%31s", &buffer2); //gets number for logarithm

        if (strcmp(buffer2, "pi") == 0) {
            num1 = PI;
        } else if (strcmp(buffer2, "e") == 0) {
            num1 = E;
        } else {
            num1 = strtod(buffer2, NULL);
        }
        
        if (num1 <= 0) {
            printf("Error: Logarithm is undefined for non-positive numbers.\n");
            return 1; // exits with error code
        }

        printf("Base of logarithm (enter e for natural log): \n");
        scanf("%31s", &buffer); // gets base for logarithm

        if (strcmp(buffer, "e") == 0 || strcmp(buffer, "E") == 0) {

            printf("Result: %lf\n", log(num1)); // calculates and prints natural logarithm

        } else if (strcmp(buffer, "pi") == 0 || strcmp(buffer, "PI") == 0) {

            printf("Result: %lf\n", log(num1) / log(PI)); // calculates and prints logarithm with base pi

        } else {
            double base = strtod(buffer, NULL); // converts base input to double
    
            if (base <= 1) {
                printf("Error: Logarithm base must be greater than 1.\n");
                return 1; // exits with error code
            }

            printf("Result: %lf\n", log(num1) / log(base)); // calculates and prints logarithm with specified base
        }

        return 0; // exits after calculation

    } else {
        printf("Error: Invalid operator.");// operator that's not available chosen
        return 1; // exits with error code
    }

    printf("Enter the first number: (you can type pi or e)\n");
    scanf("%31s", buffer);

    if (strcmp(buffer, "pi") == 0) {
        num1 = PI;
    } else if (strcmp(buffer, "e") == 0) {
        num1 = E;
    } else {
        num1 = strtod(buffer, NULL);
    }

    printf("Enter the first number: (you can type pi or e)\n");
    scanf("%31s", buffer);

    if (strcmp(buffer, "pi") == 0) {
        num2 = PI;
    } else if (strcmp(buffer, "e") == 0) {
        num2 = E;
    } else {
        num2 = strtod(buffer, NULL);
    }

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