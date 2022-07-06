//author:孟德昊
//时间：
//求和
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int n;
	float k,sum;
	for(n=1;n<=100;n++)
	{
		sum += n;
		}
	for(n=1;n<=50;n++)
	{
		sum += n*n;
	}
	for(k=1;k<=10;k++)
	{
		sum += 1/k;
	}
	printf("sum=%.2f",sum);
}

