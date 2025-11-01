#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100]; // assuming max size 100

    // Read array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, val;
    scanf("%d %d", &pos, &val);

    // Shift elements to the right
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = val;
    n++;

    // Print updated array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
