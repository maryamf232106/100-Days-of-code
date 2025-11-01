#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int k;
    scanf("%d", &k);
    k = k % n; // handle k > n

    int rotated[n];

    // Rotate right by k
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }

    // Print rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", rotated[i]);

    return 0;
}
