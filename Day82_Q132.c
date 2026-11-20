#include <stdio.h>

enum Traffic {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int choice;

    printf("0. RED\n");
    printf("1. YELLOW\n");
    printf("2. GREEN\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case RED:
            printf("Stop\n");
            break;

        case YELLOW:
            printf("Wait\n");
            break;

        case GREEN:
            printf("Go\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}