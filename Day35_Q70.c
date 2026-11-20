
#include <stdio.h>

int main() {
    int a[100], n, k, i, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (n <= 0) {
        printf("Invalid array size");
        return 0;
    }

    k = k % n;

    for (i = 0; i < k; i++) {
        temp = a[n - 1];

        for (int j = n - 1; j > 0; j--)
            a[j] = a[j - 1];

        a[0] = temp;
    }

    printf("Rotated array: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
