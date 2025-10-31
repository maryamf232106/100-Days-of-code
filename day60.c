#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, max;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    printf("Output: ");
    for(i = 0; i <= n - k; i++) {
        max = arr[i];
        for(j = i; j < i + k; j++) {
            if(arr[j] > max)
                max = arr[j];
        }
        printf("%d ", max);
    }

    return 0;
}
