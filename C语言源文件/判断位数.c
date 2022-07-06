#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int x,n=1;
	scanf("%d", &x);
	while (x>10) {
		x = x / 10;
		n++;
	}
	printf("%d", n );
	system("pause");
	return 0;
}