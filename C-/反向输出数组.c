//author:孟德昊
//时间：09/11/21 16:44
/*
将一个长度为5的数组的值按逆序重新存放，例如，原来顺序为：8,6,5,4,1。要求改为：1,4,5,6,8。都用"%d "的形式输出
*/
#define N 5
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[N],b[N];
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]); 
	 } 
	for(i = 0; i < N;i++)
	{
		b[i] = a[N - i - 1];
		printf("%d ",b[i]);
	}
	return 0;
}

