#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int first, second;
    first = second = -1000000;  // assuming elements are not smaller than this

    // Find largest and second largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("%d", second);
    return 0;
}
