#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int first = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            if (first) {
                str[i] = toupper((unsigned char)str[i]);
                first = 0;
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}