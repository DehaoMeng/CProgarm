//author:孟德昊
//时间：09/11/21 16:45
/*
冒泡法排序法对用户输入的10个整数进行排序，输出采用"%d "的形式
*/
#include<stdio.h>
#define N 10
#define _CRT_SECURE_NO_WARNINGS 1
void bubble_sort(int a[],int len)
{
	int i,j,temp;
	for(i = 0;i < len - 1;i++)
	{
		for(j = 0;j < len - 1 - i;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main(void)
{
	int i;
	int a[N];
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a,N);
	for(i = 0;i < N - 1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("%d",a[i]);
	return 0;
}

