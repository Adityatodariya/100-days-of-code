#include <stdio.h>

int main() {
    int m, n;

    printf("Enter first array size: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter first sorted array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter second array size: ");
    scanf("%d", &n);

    int b[n];
    int merged[m + n];

    printf("Enter second sorted array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < m)
        merged[k++] = a[i++];

    while (j < n)
        merged[k++] = b[j++];

    printf("Merged array: ");

    for (int i = 0; i < k; i++)
        printf("%d ", merged[i]);

    printf("\n");

    return 0;
}