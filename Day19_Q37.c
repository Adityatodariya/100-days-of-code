
#include <stdio.h>

int main() {
    int a, b, x, y, temp, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    x = a;
    y = b;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    gcd = x;

    if (a == 0 || b == 0)
        printf("LCM = 0");
    else
        printf("LCM = %lld", (long long)a / gcd * b);

    return 0;
}
