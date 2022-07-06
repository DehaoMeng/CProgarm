#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char output(int n) {
	int m;
	m = n / 10;
	if (m != 0)
		output(m);
	putchar(n % 100 + '0');                //±ä×Ö·û+'0',±äÊý×Ö-'0'
}
int main() {
	int n;
	scanf("%d", &n);
	if (n < 0) {
		printf("-");
		n = -n;
	}
	output(n);
	system("pause");
	return 0;
}