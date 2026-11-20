
#include <stdio.h>

int main() {
    int n, temp, digit, count = 0;
    int sum = 0, power, i;

    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong Number");
        return 0;
    }

    temp = n;

    do {
        count++;
        temp /= 10;
    } while (temp != 0);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= count; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
