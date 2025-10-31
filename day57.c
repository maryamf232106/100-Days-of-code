#include <stdio.h>

int main() {
    int arr[100], n, i, j, prev;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Previous Greater Elements: ");
    for(i = 0; i < n; i++) {
        prev = -1;  // Default if no greater element is found
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
