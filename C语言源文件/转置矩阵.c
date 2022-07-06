#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int z(int a[3][3]) {
	int i, j;
	int newa[3][3];
	for (i = 0; i <3; i++) {
		for (j = i; j < 3; j++) {
			newa[j][i] = a[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", newa[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int a[3][3] ;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	z(a);
	system("pause");
	return 0;
}