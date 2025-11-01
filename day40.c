#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");

    // There will be (n + m - 1) diagonals
    for (int d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            // Even diagonal: go upwards
            int r = (d < n) ? d : n - 1;
            int c = d - r;
            while (r >= 0 && c < m) {
                printf("%d ", arr[r][c]);
                r--;
                c++;
            }
        } else {
            // Odd diagonal: go downwards
            int c = (d < m) ? d : m - 1;
            int r = d - c;
            while (c >= 0 && r < n) {
                printf("%d ", arr[r][c]);
                r++;
                c--;
            }
        }
    }

    return 0;
}
