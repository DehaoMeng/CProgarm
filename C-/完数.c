//author:ÃÏµÂê»
//Ê±¼ä£º
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i, j, sum;
	for (i = 2; i <= 10000; i++)
	{
		sum = 1;
		for (j = 2; j <= i / 2; j++)
			if (i%j == 0)
				sum += j;
		if (sum == i)
		{
			printf("%5d its fastors are 1 ", i);
			for (j = 2; j <= i / 2; j++)
				if (i%j == 0)printf("%d ", j);
			printf("\n");
		}
	}
	return 0;
}
