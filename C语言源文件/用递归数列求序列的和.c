#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int A(int n) {
	int y;
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		y = n * A(n - 1) - (n - 1) * A(n - 2);
	return y;
}
int s(int n) {
	int sum=0,i,x;
	for (i = 1; i <= n; i++) {
		x = A(i);
		sum += x;
	}
	return sum;
}
int main() {
	int n, sum;
	scanf("%d", &n);
	while
	sum = s(n);
	printf("%d", sum);
	system("pause");
	return 0;
}