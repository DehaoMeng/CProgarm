#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100][100],i,j,n,m=1,y;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
		m++;
	}
	//�������²���
	for (i = n-2; i>=0; i--) {
		for (j = 0; j <= i; j++) {
			if (a[i + 1][j] < a[i + 1][j + 1])
				y = a[i + 1][j];
			else
				y = a[i + 1][j + 1];
			a[i][j] += y;        //��i=4��a[4][0],a[4][1],a[4][2],a[4][3]������������  �Ƚ�  ������һ�ε�a[3][0],a[3][1],a[3][3]�ı���  �Ƚ�
		}
	}
	printf("%d", a[0][0]);
	system("pause");
	return 0;
}
