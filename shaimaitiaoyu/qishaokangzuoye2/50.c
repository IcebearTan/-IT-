#include <stdio.h>


int main() {int ROWS;int COLS;scanf("%d",&ROWS);scanf("%d",&COLS);
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
    printf("Enter elements of matrix 1:\n");    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
