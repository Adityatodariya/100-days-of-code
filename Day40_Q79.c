
#include <stdio.h>

int main() {
    int a[100][100], r, c, i, j, d;
    int start, end;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal traversal: ");

    for (d = 0; d < r + c - 1; d++) {
        start = (d - c + 1 > 0) ? d - c + 1 : 0;
        end = (d < r - 1) ? d : r - 1;

        if (d % 2 == 0) {
            for (i = end; i >= start; i--)
                printf("%d ", a[i][d - i]);
        } else {
            for (i = start; i <= end; i++)
                printf("%d ", a[i][d - i]);
        }
    }

    return 0;
}
