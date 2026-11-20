#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int expected = n * (n + 1) / 2;
    int actual = 0;

    for (int i = 0; i < n; i++)
        actual += arr[i];

    printf("Missing number: %d\n", expected - actual);

    return 0;
}