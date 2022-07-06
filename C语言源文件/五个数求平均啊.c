#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100], b[100], n,i,x=2,m,j=0;
	scanf("%d", &n);
	while (n % 5 != 0) {
		printf("invalid!\n");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++) {
		a[i] = x;
        x = x+2;
		printf("%d ",a[i]);
	}
	
		for (i = 0; i < n;) {
			m = (a[i] + a[i + 1] + a[i + 2] + a[i + 3] + a[i + 4]) / 5;
			b[j] = m;
			j++;
            i += 5;
		}
		printf("\n");
		for (j = 0; j < n / 5; j++)
	printf("%d ", b[j]);
	system("pause");
	return 0;
}