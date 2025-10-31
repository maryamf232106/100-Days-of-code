#include <stdio.h>

int main() {
    int nums[100], n, i, xorAll = 0, xorArr = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        xorArr ^= nums[i];   // XOR of all array elements
    }

    // XOR of all numbers from 0 to n-2 (since one repeats)
    for(i = 0; i < n - 1; i++)
        xorAll ^= i;

    printf("Repeated element: %d\n", xorArr ^ xorAll);
    return 0;
}
