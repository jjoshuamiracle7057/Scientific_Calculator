/*
  🔢 Advanced Scientific Calculator
  Language: C
  Features: Arithmetic, Trigonometry, Logarithms, Exponentials
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

void displayMenu() {
    printf("\n=================================================\n");
    printf("             CASIO-STYLE CALCULATOR              \n");
    printf("=================================================\n");
    printf(" [1] Addition (+)        [7]  Sine (sin)\n");
    printf(" [2] Subtraction (-)     [8]  Cosine (cos)\n");
    printf(" [3] Multiplication (*)  [9]  Tangent (tan)\n");
    printf(" [4] Division (/)        [10] Log base 10 (log10)\n");
    printf(" [5] Power (x^y)         [11] Natural Log (ln)\n");
    printf(" [6] Square Root (sqrt)  [12] Exit\n");
    printf("=================================================\n");
    printf("Select an operation (1-12): ");
}

int main() {
    int choice;
    double num1, num2, result;

    printf("Booting Scientific Calculator...\n");

    while (1) {
        displayMenu();
        
        // Read user input
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting...\n");
            break;
        }

        // Exit condition
        if (choice == 12) {
            printf("Shutting down calculator. Goodbye!\n");
            break;
        }

        // Check if choice is valid
        if (choice < 1 || choice > 12) {
            printf("⚠️ Invalid selection. Please try again.\n");
            continue;
        }

        // Handle operations requiring two inputs
        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        } 
        // Handle operations requiring one input
        else if (choice >= 6 && choice <= 11) {
            printf("Enter number: ");
            scanf("%lf", &num1);
            
            // Convert degrees to radians for trigonometric functions
            if (choice >= 7 && choice <= 9) {
                num1 = num1 * (PI / 180.0);
            }
        }

        // Perform the selected calculation
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("\nResult: %.4lf + %.4lf = %.4lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("\nResult: %.4lf - %.4lf = %.4lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("\nResult: %.4lf * %.4lf = %.4lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("\n⚠️ Error: Division by zero is undefined.\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult: %.4lf / %.4lf = %.4lf\n", num1, num2, result);
                }
                break;
            case 5:
                result = pow(num1, num2);
                printf("\nResult: %.4lf ^ %.4lf = %.4lf\n", num1, num2, result);
                break;
            case 6:
                if (num1 < 0) {
                    printf("\n⚠️ Error: Cannot calculate square root of a negative number in real domain.\n");
                } else {
                    result = sqrt(num1);
                    printf("\nResult: sqrt(%.4lf) = %.4lf\n", num1, result);
                }
                break;
            case 7:
                result = sin(num1);
                printf("\nResult: sin() = %.4lf\n", result);
                break;
            case 8:
                result = cos(num1);
                printf("\nResult: cos() = %.4lf\n", result);
                break;
            case 9:
                result = tan(num1);
                printf("\nResult: tan() = %.4lf\n", result);
                break;
            case 10:
                if (num1 <= 0) {
                    printf("\n⚠️ Error: Logarithm undefined for zero or negative numbers.\n");
                } else {
                    result = log10(num1);
                    printf("\nResult: log10(%.4lf) = %.4lf\n", num1, result);
                }
                break;
            case 11:
                if (num1 <= 0) {
                    printf("\n⚠️ Error: Natural logarithm undefined for zero or negative numbers.\n");
                } else {
                    result = log(num1); // log() in C is natural log (ln)
                    printf("\nResult: ln(%.4lf) = %.4lf\n", num1, result);
                }
                break;
        }
    }
    return 0;
}
