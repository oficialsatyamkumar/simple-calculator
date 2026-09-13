#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void display_menu(void) {
    printf("\n=============================\n");
    printf("     C CALCULATOR MODULE     \n");
    printf("=============================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (** / ^)\n");
    printf("6. Integer Division (//)\n");
    printf("7. Square Root (sqrt)\n");
    printf("8. Cube (x^3)\n");
    printf("9. Cube Root (cbrt)\n");
    printf("0. Exit\n");
    printf("=============================\n");
    printf("Select an operation: ");
}

int main(void) {
    int choice;
    double a, b;

    while (1) {
        display_menu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 0) {
            printf("Exiting calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.4lf\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.4lf\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.4lf\n", a * b);
                break;

            case 4:
                printf("Enter dividend and divisor: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    printf("Result: %.4lf\n", a / b);
                }
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.4lf\n", pow(a, b));
                break;

            case 6:
                printf("Enter dividend and divisor: ");
                scanf("%lf %lf", &a, &b);
                if (b == 0) {
                    printf("Error: Division by zero is undefined.\n");
                } else {
                    printf("Result: %.0lf\n", floor(a / b));
                }
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%lf", &a);
                if (a < 0) {
                    printf("Error: Square root of a negative number is undefined in real numbers.\n");
                } else {
                    printf("Result: %.4lf\n", sqrt(a));
                }
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.4lf\n", a * a * a);
                break;

            case 9:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.4lf\n", cbrt(a));
                break;

            default:
                printf("Invalid selection. Please choose a valid menu option.\n");
                break;
        }
    }

    return 0;
}
