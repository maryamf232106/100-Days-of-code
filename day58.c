#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i, j, prod;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for(i = 0; i < n; i++) {
        prod = 1;
        for(j = 0; j < n; j++) {
            if(i != j)
                prod *= nums[j];
        }
        answer[i] = prod;
    }

    printf("Result: [");
    for(i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i < n - 1) printf(",");
    }
    printf("]\n");

    return 0;
}
