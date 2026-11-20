#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int total = 0, left = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int pivot = -1;

    for (int i = 0; i < n; i++) {
        int right = total - left - arr[i];

        if (left == right) {
            pivot = i;
            break;
        }

        left += arr[i];
    }

    printf("%d\n", pivot);

    return 0;
}