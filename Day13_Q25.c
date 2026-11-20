
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d", (int)a % (int)b);
            else
                printf("Modulo by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
