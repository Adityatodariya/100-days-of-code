
#include <stdio.h>

int main() {
    int i, j, count[] = {1, 4, 5, 3, 1};

    for (i = 0; i < 5; i++) {
        for (j = 0; j < count[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
