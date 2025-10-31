#include <stdio.h>

int main() {
    int nums[100], n, i, j, count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++) {
            if(nums[i] == nums[j])
                count++;
        }
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority Element: %d\n", majority);
    return 0;
}
