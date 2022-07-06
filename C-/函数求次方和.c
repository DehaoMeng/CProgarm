//author: 昊昊反思
//time：20/11/21 12:54
/*
编一程序，求x1+x2+x3+…+xk，其中x和k都是正整数，由键盘输入x和k ，计算结果输出到屏幕（上机作业）
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int answer(int x,int k)
{
	int s = k;
	int q = 1;
	for(;s > 0 ; s--)
	{
		q *= x;
	}
	return q;
}

int main()
{
	int x,k;
	int sum=0;
	scanf("%d,%d",&x,&k);
	
	for(;k>0;k--)
	{
		sum += answer(x,k);
	}
	printf("%d",sum);
	return 0;
}

