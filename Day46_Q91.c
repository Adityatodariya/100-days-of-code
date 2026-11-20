
#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch += 32;

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }

    result[j] = '\0';

    printf("Result = %s", result);

    return 0;
}
