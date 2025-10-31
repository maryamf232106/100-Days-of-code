#include <stdio.h>

int main() {
    int arr[100], n, x, i, index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {   // first element >= x
            index = i;
            break;
        }
    }

    printf("Index of ceil of %d: %d\n", x, index);
    return 0;
}
