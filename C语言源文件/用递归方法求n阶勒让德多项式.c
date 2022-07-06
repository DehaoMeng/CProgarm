#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double p(int n, int x) {
	double z;
	if (n == 0)
		return 1;
    if (n == 1)
		return(x);
	z = ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
	return(z);
}
int main() {
	int n, x;
	double z;
	scanf("%d,%d", &n, &x);
	z = p(n, x);
	printf("%.2lf", z);
	system("pause");
	return 0;
}