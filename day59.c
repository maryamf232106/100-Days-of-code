#include <stdio.h>

int main() {
    int arr[100], n, k, i, sum = 0, maxSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // Find sum of first k elements
    for(i = 0; i < k; i++)
        sum += arr[i];
    maxSum = sum;

    // Sliding window
    for(i = k; i < n; i++) {
        sum += arr[i] - arr[i - k];
        if(sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);
    return 0;
}
