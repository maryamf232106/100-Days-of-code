#include <stdio.h>

int main() {
    int arr[100], n, i;
    int max_sum, current_sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max_sum = current_sum = arr[0];  // start with first element

    for(i = 1; i < n; i++) {
        if(current_sum + arr[i] > arr[i])
            current_sum = current_sum + arr[i];
        else
            current_sum = arr[i];

        if(current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum sum: %d\n", max_sum);

    return 0;
}
