
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int x = a, y = b;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("HCF = %d", x);

    return 0;
}
