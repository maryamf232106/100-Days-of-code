#include <stdio.h>

int main() {
    int nums1[100], nums2[100], merged[200];
    int m, n, i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter elements of first sorted array: ");
    for(i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);
    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    i = 0; j = 0; k = 0;

    // Merge both arrays
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements
    while(i < m)
        merged[k++] = nums1[i++];
    while(j < n)
        merged[k++] = nums2[j++];

    printf("Merged sorted array: ");
    for(i = 0; i < k; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}
