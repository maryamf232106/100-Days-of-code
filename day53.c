#include <stdio.h>

int main() {
    int nums[100], n, i, totalSum = 0, leftSum = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];   // calculate total sum
    }

    for(i = 0; i < n; i++) {
        if(leftSum == totalSum - leftSum - nums[i]) {
            printf("Pivot index: %d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("Pivot index: -1\n");
    return 0;
}
