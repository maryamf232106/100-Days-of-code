#include <stdio.h>

int main() {
    int arr[100], n, i, j, next;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Next Greater Elements: ");
    for(i = 0; i < n; i++) {
        next = -1;  // Default if no greater element found
        for(j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if(i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
