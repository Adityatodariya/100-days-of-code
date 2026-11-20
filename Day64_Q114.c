#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    int last[256];

    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int start = 0, maxLength = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        int length = i - start + 1;

        if (length > maxLength)
            maxLength = length;
    }

    printf("Longest substring length: %d\n", maxLength);

    return 0;
}