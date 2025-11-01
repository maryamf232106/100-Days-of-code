#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100]; // assuming max size 100

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos;
    scanf("%d", &pos);

    // Shift elements to the left from position
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--; // Decrease array size

    // Print updated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
