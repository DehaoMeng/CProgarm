#define _CRT_SECRUE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a[100][100], x[100], y[100], sum = 0,i,j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}                                //���벿��
	for (i = 0; i < 4; i++)
	{
		x[i] = a[i][0];
		for (j = 1; j < 5; j++)
		{
			if (a[i][j] > x[i])
				x[i] = a[i][j];
		}
	}                             //�ҳ�һ���е����ֵ
	for (j = 0; j < 5; j++)
	{
		y[j] = a[0][j];
		for (i = 1; i < 4; i++)
		{
			if (a[i][j] < y[j])
				y[j] = a[i][j];
		}
	}                              //�ҳ�һ���е���Сֵ
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] == x[i] && a[i][j] == y[j])                 //�ж����ֵ��Сֵ�Ƿ�һ��
			{
				printf("a[%d][%d]=%d\n", i, j, a[i][j]);
				sum++;
			}
		}
	}
	if (sum == 0)
		printf("none");
	return 0;
}
