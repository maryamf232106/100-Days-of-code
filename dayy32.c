#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0}, digit, max = 0, result = 0;

    // Input number
    scanf("%lld", &num);

    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    // Output the most frequent digit
    printf("%d", result);

    return 0;
}
