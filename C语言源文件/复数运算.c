#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d %d\n%d %d", &a, &b, &c, &d);
	if (a + c == 0 && b + d != 0)
	{
		printf("%di", b + d);
	}
	else if (b + d == 0 && a + c != 0) {
		printf("%d", a + c);
	}
	else if (a + c != 0 && b + d >= 0) {
		printf("%d+%di", a + c, b + d);
	}
	else if (a + c != 0 && b + d <= 0) {
		printf("%d%di", a + c, b + d);
	}
	else if (a + c == 0 && b + d == 0) {
		printf("0");
	}
	return 0;
}