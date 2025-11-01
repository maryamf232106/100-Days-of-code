#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // main diagonal elements
    }

    printf("%d\n", sum);
    return 0;
}
