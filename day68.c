#include <stdio.h>

int main() {
    int nums[100], n, i, total = 0, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    total = n * (n + 1) / 2;  // Sum of numbers from 0 to n
    printf("Missing number: %d\n", total - sum);

    return 0;
}
