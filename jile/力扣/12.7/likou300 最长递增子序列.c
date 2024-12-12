#include<string.h>
#include <stdio.h>


void rotate(int** matrix, int n) {
    int matrix1[n][n];
    memmove(matrix1, matrix, 4 * n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = matrix1[j][i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        matrix[i] = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    rotate(matrix, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
        free(matrix[i]);
    free(matrix);

    return 0;
}