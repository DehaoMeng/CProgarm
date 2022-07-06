#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, m, i = 1;
	double sum = 0,average;
	scanf("%d", &x);
	if (x < 0)
	{
		printf("No Students	");
	}
	else
	{
		sum = x;
		scanf("%d", &m);
		while (m > 0)
		{
			sum += m;
			i++;
			scanf("%d", &m);
		}
		average= sum / i;
		printf("%.2lf", average);
	}
}