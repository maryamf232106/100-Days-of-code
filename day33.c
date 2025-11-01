#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];

    // Input array elements
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int target;
    scanf("%d", &target);

    int low = 0, high = n - 1, mid, found = -1;

    // Binary search logic
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            found = mid;
            break;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}
