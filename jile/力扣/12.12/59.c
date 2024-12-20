#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void fill_blank(int* matrix[], int* row, int* line, int* front, int* sum, int n) {
	int key = 0;
	if (*front < n / 2)key = 1;
	else if (*front >= n / 2)key = -1;
	while (1) {
		if (((*front +key) >= n)||((*front+key)<0))break;
		else {
			(*front) += key;
			if (matrix[*row][*line] != 0) {
				(*front) -= key;
				break;
			}
		}
		(*sum)++;
		matrix[*row][*line] = (*sum);
	}
}
int main() {
	int n = 20;
	int **matrix = (int **)malloc(n * sizeof(int*));
	memset(matrix, 0, sizeof(int *)*n);
	for (int i = 0; i < n; i++) {
		matrix[i] = (int*)malloc(n * sizeof(int));
		memset(matrix[i], 0, sizeof(int)*n);
	}
	matrix[0][0] = 1;
	int sum = 1;
	int row = 0,line = 0;
	int* front = &line, * back = &row;
	while (sum <( n * n)) {
		fill_blank(matrix, &row, &line, front, &sum,n);
		int* temp = front;
		front = back;
		back = temp;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-5.d ", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
