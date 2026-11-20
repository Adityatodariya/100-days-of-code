
#include <stdio.h>

int main() {
    char name[200];
    int i, start = 0, len = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    while (name[len] != '\0' && name[len] != '\n')
        len++;

    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            if (i != 0)
                printf("%c. ", name[i]);
            else
                printf("%c. ", name[i]);
        }
    }

    start = len - 1;
    while (start >= 0 && name[start] != ' ')
        start--;

    printf("\nSurname: ");

    for (i = start + 1; i < len; i++)
        printf("%c", name[i]);

    return 0;
}
