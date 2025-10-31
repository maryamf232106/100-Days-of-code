#include <stdio.h>

int main() {
    int arr[100], n, k, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("Output: ");
    for(i = 0; i <= n - k; i++) {
        int found = 0;
        for(j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;   // stop after finding first negative
            }
        }
        if(found == 0)
            printf("0 ");
    }

    return 0;
}
