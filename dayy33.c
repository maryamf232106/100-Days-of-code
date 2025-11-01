#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];

    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x;
    scanf("%d", &x);

    int i;
    // Find position to insert
    for (i = n - 1; (i >= 0 && arr[i] > x); i--)
        arr[i + 1] = arr[i];  // Shift elements right

    arr[i + 1] = x;  // Insert element
    n++;  // Increase array size

    // Print updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
