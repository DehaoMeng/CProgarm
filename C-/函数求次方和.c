//author: �껷�˼
//time��20/11/21 12:54
/*
��һ������x1+x2+x3+��+xk������x��k�������������ɼ�������x��k ���������������Ļ���ϻ���ҵ��
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

