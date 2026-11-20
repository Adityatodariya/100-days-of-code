#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    int choice;

    printf("0. SUCCESS\n");
    printf("1. FAILURE\n");
    printf("2. TIMEOUT\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case SUCCESS:
            printf("Operation completed successfully!\n");
            break;

        case FAILURE:
            printf("Operation failed!\n");
            break;

        case TIMEOUT:
            printf("Operation timed out!\n");
            break;

        default:
            printf("Invalid status!\n");
    }

    return 0;
}