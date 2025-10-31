#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        leftSum = x * (x + 1) / 2;             // sum from 1 to x
        rightSum = (n * (n + 1) / 2) - (x - 1) * x / 2; // sum from x to n

        if(leftSum == rightSum) {
            printf("Pivot integer: %d\n", x);
            return 0;
        }
    }

    printf("Pivot integer: -1\n");
    return 0;
}
