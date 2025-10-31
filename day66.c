#include <stdio.h>

int main() {
    int nums[100], n, target;
    int i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("-1 -1\n");

    return 0;
}
