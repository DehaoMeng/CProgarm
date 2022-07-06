#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int maxp(int m, int n) {
	int r;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int minp(int m, int n) {
	int y;
	y = m * n / maxp(m, n);   //最小公倍数的求法  m*n/(最大公倍数）
	return y;
}
int main() {
	int m, n,max,min;
	scanf("%d,%d", &m, &n);
	max = maxp(m, n);
	min = minp(m, n);
	printf("%d\n%d", max, min);
	system("pause");
	return 0;
}
//49/28=1...21
//28/21=1...7
//21/7=3...0