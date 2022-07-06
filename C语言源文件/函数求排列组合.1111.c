#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int c(int n, int m) {
	int x;
	if (m == 0)
		return 1;
	if (m == 0 || m == n)
		return 1; 
	x=c(n - 1, m) + c(n - 1, m - 1);
	return (x);
}
int main() {
	int m, n, x;
	scanf("%d,%d", &m, &n);
	x = c(m, n);
	printf("%d", x);
	system("pause");
	return 0;
}
