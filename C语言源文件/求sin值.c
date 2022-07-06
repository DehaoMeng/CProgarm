#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n=1;
	double x,f,t,s=0;
	scanf("%lf %lf", &x, &f);
	t = x;
	do {
		s += t;
		t = -t * x * x / (n + 1) / (n + 2);
		n += 2;
	} while (fabs(t) >= f);
	printf("sin(%lf)=%.6lf", x, s);
	system("pause");
	return 0;
}