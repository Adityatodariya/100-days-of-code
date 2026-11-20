#include <stdio.h>

enum Operations {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    float a, b, result;

    printf("MENU\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result: %.2f\n", result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("Result: %.2f\n", result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}