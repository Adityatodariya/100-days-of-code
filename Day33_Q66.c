
#include <stdio.h>

int main() {
    int a[101], n, i, value, pos;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &value);

    pos = n;

    while (pos > 0 && a[pos - 1] > value) {
        a[pos] = a[pos - 1];
        pos--;
    }

    a[pos] = value;
    n++;

    printf("Updated array: ");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
