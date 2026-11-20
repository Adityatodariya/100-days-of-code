#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[100];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%99s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select Gender:\n");
    printf("0. Male\n");
    printf("1. Female\n");
    printf("2. Other\n");

    printf("Enter gender: ");
    scanf("%d", (int *)&p.gender);

    printf("\nPerson Details\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;

        case FEMALE:
            printf("Gender: Female\n");
            break;

        case OTHER:
            printf("Gender: Other\n");
            break;

        default:
            printf("Invalid Gender\n");
    }

    return 0;
}