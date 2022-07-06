#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	  int a[100][100], n, m, i,j,k;
	  scanf("%d %d", &m, &n);
	a[0][0] = m;
	for (i = 1; i < n; i++) {
		a[i][i] = a[i - 1][i - 1] + i * 2;
		for (j = i; j >= 0; j--)
			a[j - 1][i] = a[j][i] - 1;
		for (j = i; j >= 0; j--)
			a[i][j - 1] = a[i][j] + 1;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j <n; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}