#include <stdio.h>

int main() {
    int n1, n2;
    int arr1[100], arr2[100], merged[200];
    int i, j, k = 0;

    // Input first array
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    // Input second array
    scanf("%d", &n2);
    for (j = 0; j < n2; j++)
        scanf("%d", &arr2[j]);

    // Merge arrays
    for (i = 0; i < n1; i++)
        merged[k++] = arr1[i];
    for (j = 0; j < n2; j++)
        merged[k++] = arr2[j];

    // Print merged array
    for (i = 0; i < k; i++)
        printf("%d ", merged[i]);

    return 0;
}
