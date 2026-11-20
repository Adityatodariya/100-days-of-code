#include <stdio.h>

int main() {
    int n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum: %d\n", maxSum);

    return 0;
}