#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

double memo[100][25][25];
double move(int n, int k, int row, int col) {
	if(row < 0 || col < 0 || row >= n || col >= n) {
		return 0;
	}
	if(k <= 0) return 1;
    if(memo[k-1][row][col] > -1) return memo[k-1][row][col];
	double re = 0;
	re += 0.125*move(n, k-1, row-1, col-2);
    re += 0.125*move(n, k-1, row-2, col-1);
	re += 0.125*move(n, k-1, row+1, col-2);
    re += 0.125*move(n, k-1, row+2, col-1);
    re += 0.125*move(n, k-1, row+1, col+2);
    re += 0.125*move(n, k-1, row+2, col+1);
    re += 0.125*move(n, k-1, row-1, col+2);
    re += 0.125*move(n, k-1, row-2, col+1);
	memo[k-1][row][col] = re;
	return re;
}

int main() {
	double result = 1;
	int n, k, row, col;
	memset(memo, -1, 100*25*25);
	scanf("%d%d%d%d", &n, &k, &row, &col);
	result = move(n, k, row, col);
	printf("%lf", result);
	return 0;
}
