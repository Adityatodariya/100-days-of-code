
#include <stdio.h>

int main() {
    char str[300], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' &&
            str[i] != '\0' && str[i] != '\t') {
            j++;
        } else {
            if (j > max) {
                max = j;
                int k;
                for (k = 0; k < j; k++)
                    longest[k] = str[i - j + k];
                longest[j] = '\0';
            }
            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}
