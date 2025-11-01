#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonal[n]; // store diagonal elements
    int k = 0;
    for (int i = 0; i < n && i < m; i++) {
        diagonal[k++] = matrix[i][i];
    }

    int distinct = 1; // assume true
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (diagonal[i] == diagonal[j]) {
                distinct = 0; // found duplicate
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
