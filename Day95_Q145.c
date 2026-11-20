#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student findTopper(struct Student s[], int n) {
    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    return s[highest];
}

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

    struct Student topper = findTopper(s, n);

    printf("\nTop Student Details\n");
    printf("Name: %s\n", topper.name);
    printf("Roll Number: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}