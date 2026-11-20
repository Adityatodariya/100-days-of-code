
#include <stdio.h>

int main() {
    int a[100][100], b[100][100], c[100][100];
    int r, col, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &col);

    printf("Enter first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    printf("Sum:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
