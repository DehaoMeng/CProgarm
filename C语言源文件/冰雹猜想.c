#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a,count=0;
	scanf("%d", &a);
	while (a != 1) {
		if (a % 2 == 0)
			a = a / 2;
		else if (a % 2 != 0)
			a = a * 3 + 1;
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}