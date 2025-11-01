#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Reverse the array in place
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Output reversed array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
