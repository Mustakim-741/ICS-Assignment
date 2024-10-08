#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("\nOperations Manager Tool\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus (float typecasting)\n");
    printf("6. Absolute Difference\n");
    printf("7. Square Root Calculation\n");
    printf("8. Distance Calculation\n");
    printf("9. Exit\n");
    printf("Select an option (1-9): ");
    scanf("%d", &choice);

    if (choice == 9) {
        printf("Exiting the program. Goodbye!\n");
        return 0;
    }

    if (choice >= 1 && choice <= 7) {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        if (choice != 7) {
            printf("Enter the second number: ");
            scanf("%f", &num2);
        }
    }

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;
        case 5:
            if ((int)num2 == 0) {
                printf("Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", (int)num1 % (int)num2);  // Typecast to integers
            }
            break;
        case 6:
            printf("Absolute Difference: %.2f\n", fabs(num1 - num2));  // Absolute difference
            break;
        case 7:
            if (num1 >= 0) {
                printf("Square Root: %.2f\n", sqrt(num1));
            } else {
                printf("Square root of negative numbers is not allowed.\n");
            }
            break;
        case 8: {
            float x1, y1, x2, y2;
            printf("Enter coordinates (x1, y1): ");
            scanf("%f %f", &x1, &y1);
            printf("Enter coordinates (x2, y2): ");
            scanf("%f %f", &x2, &y2);
            float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            printf("Distance: %.2f\n", distance);
            break;
        }
        default:
            printf("Invalid selection. Please select a number between 1 and 9.\n");
            break;
    }

    return 0;
}
