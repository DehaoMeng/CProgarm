#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main() {
	int x, y, z,s;
	scanf("%d/%d", &x, &y);
	if (x % y == 0)
	{
		z = x / y;
		printf("%d", z);
	}
	else if (x % y != 0)
	{
		z = x / y;
		s = x % y;
		printf("%dU%d/%d", z, s, y);
	}
	system("pause");
	return 0;
}