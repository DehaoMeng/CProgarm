#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int p(int x,int k)
{
	int y;
	if (k < 0)
		return 0;
	else if (k == 0)
		return 1;
	else if (k == 1)
		return x;
	else 
	y = x * p(x, k - 1);	
	return(y);
}
int s(int x,int k)
{
	int y,sum=0;
	for (int i = 1; i <= k; i++) 
	{
		y = p(x, i);
		sum += y;
	}
	return(sum);
}
int main()
{
	int n, k, sum;
	scanf("%d,%d", &n, &k);
	sum = s(n, k);
	printf("%d", sum);
	system("pause");
	return 0;
}