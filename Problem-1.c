#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("\nOperations Manager Tool\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Modulus\n");
    printf("6. Exit\n");
    printf("Select an option (1-6): ");
    scanf("%d", &choice);

    if (choice == 6) {
        printf("Exiting the program. Goodbye!\n");
    }

    else if (choice >= 1 && choice <= 5) {
        printf("Enter the first number: ");
        scanf("%f", &num1);
        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch(choice) {
        case 1:
            printf("Result: %f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %f\n", num1 * num2);
            break;
        case 4:
            if ((int) num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;
        case 5:
            if ((int) num2 == 0) {
                printf("Modulus by zero is not allowed.\n");
            } else {
                printf("Result: %d\n", (int) num1 % (int) num2);
            }
            break;
        case 6:
            printf("Exiting the program. Goodbye!\n");
            break;
        default:
            printf("Invalid selection. Please select a number between 1 and 6.\n");
            break;
    }
    }
    else {
        printf("Invalid selection. Please restart the program and select a valid option\n");
    }

    return 0;
}
