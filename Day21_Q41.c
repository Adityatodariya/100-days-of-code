
#include <stdio.h>

int main() {
    int n, temp, first, last, power = 1;
    int result;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter positive number");
        return 0;
    }

    last = n % 10;
    temp = n;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;

    result = last * power + (n % power) - last + first;

    printf("Result = %d", result);

    return 0;
}
