#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c, sum, i;
	for (i = 100; i <= 999; i++) {
		a = i / 100;
		b = (i % 100) / 10;
		c = i % 10;
		sum = a * a * a + b * b * b + c * c * c;
		if (sum == i)
			printf("%d ", i);
	}
		system("pause");
	return 0;
}
