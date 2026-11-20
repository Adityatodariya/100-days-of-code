#include <stdio.h>

enum Roles {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int choice;

    printf("USER ROLES\n");
    printf("0. ADMIN\n");
    printf("1. USER\n");
    printf("2. GUEST\n");

    printf("Enter your role: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have normal access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role!\n");
    }

    return 0;
}