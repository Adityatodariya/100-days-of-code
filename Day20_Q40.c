
#include <stdio.h>

int main() {
    long long n, temp, binary = 0, place = 1;
    int digit;

    printf("Enter binary number: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("1's Complement = 1");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        if (digit != 0 && digit != 1) {
            printf("Invalid binary number");
            return 0;
        }

        binary += (1 - digit) * place;
        place *= 10;
        temp /= 10;
    }

    printf("1's Complement = %0*lld",
           0, binary);

    return 0;
}
