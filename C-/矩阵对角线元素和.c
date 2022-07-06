//author:孟德昊
//时间：09/11/21 16:43
/*
求一个3×3矩阵的对角线元素之和。提示：要分别求出两个对角线元素之和。先输出左上到右下对角线元素之和，再输出右上到左下对角线元素之和 
*/
#define N 3
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int s1,s2;
	int a[N][N],i,j;
	s1 = 0;
	s2 = 0;
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0, j = 0; j < N; i++, j++)
	{
		s1 += a[i][j];
	}
	for(i = 0, j = 2; i < 3 && j >= 0; i++, j--)
	{
		s2 +=a[i][j];
	}
	printf("s1=%d,s2=%d",s1,s2);
	return 0;
}

