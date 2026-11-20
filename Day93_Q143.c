#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of students!\n");
        return 0;
    }

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf("%99s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    printf("\nStudent with Highest Marks\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll Number: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}