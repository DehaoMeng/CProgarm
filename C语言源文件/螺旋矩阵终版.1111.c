#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100][100] = { 0 }, n, i, j, b[1000], x, k,t;
	scanf("%d", &n);
	a[0][n-1] = 1;
	k = n;
	for (x = 0; x < k / 2; x++) {
		if (x == 0) t = 1;
		else t = x;
		for (i = t; i < n - x; i++) {
			a[i][n - x - 1] = a[i - 1][n - x - 1] + 1;
		}
		for (j = n - 2 - x; j >= x; j--) {
			a[n - x - 1][j] = a[n - x - 1][j + 1] + 1;
		}
		for (i = n - x - 2; i >= x; i--) {
			a[i][x] = a[i + 1][x] + 1;
		}
		for (j = 1 + x; j < n - x - 1; j++) {
			a[x][j] = a[x][j - 1] + 1;
		}
	}
	if(n%2!=0)
	a[n/2][n/2] = n * n;
	printf("%d\n", n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}