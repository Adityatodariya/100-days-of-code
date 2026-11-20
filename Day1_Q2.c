#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d, ", a + b, a - b, a * b);

    if (b == 0)
        printf("Quotient=Undefined (division by zero)\n");
    else
        printf("Quotient=%d\n", a / b);

    return 0;
}