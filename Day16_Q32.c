
#include <stdio.h>

int main() {
    int n, temp, digit, reverse = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (temp >= 0 && temp == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
