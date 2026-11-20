
#include <stdio.h>

int main() {
    int a[100][100], n, i, j, sum = 0;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);

            if (i == j)
                sum += a[i][j];
        }
    }

    printf("Diagonal sum = %d", sum);

    return 0;
}
