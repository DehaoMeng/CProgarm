#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int swap(int* p) {
	int temp;
	for (int i = 0,j=5; i < 3; i++,j--) {
		temp = *(p + i);
		*(p + i) = *(p + j);
		*(p + j) = temp;
}
}
int main() {
	int a[6], * p=a;
	int i;
	for (i = 0; i < 6; i++) {
		scanf("%d", &a[i]);
	}
	swap(p);
	for (i = 0; i < 6; i++) {
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}