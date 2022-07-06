#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double sum(double a, double b, double c)
{
	double x1, x2, diao, l1, l2;
	diao = b * b - 4 * a * c;
	if (diao > 0)
	{
		x1 = (((-1) * b + sqrt(diao)) / (2 * a));
		x2 = (((-1) * b - sqrt(diao)) / (2 * a));
		printf("%.3lf\n%.3lf", x2, x1);
	}
	else if (diao == 0)
	{
		x1 = ((-1) * b) / (2 * a);
		x2 = x1;
		printf("%.3lf", x1, x2);
	}
	else if (diao < 0)
	{
		x1 = ((-1) * b) / (2 * a);
		diao = (-1) * diao;
		l1 = sqrt(diao) / (2 * a);
		l2 = (-1) * (sqrt(diao) / (2 * a));
		printf("%.3lf+%.3lfi\n%.3lf%.3lfi", x1, l1, x1, l2);
	}
}
int main()
{
	double a, b, c;
	scanf("%lf,%lf,%lf", &a, &b, &c);
	sum(a, b, c);
	return 0;
}
