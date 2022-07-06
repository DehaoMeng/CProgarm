//author:孟德昊
//时间：06/11/21 23:53
/*
在已经按照由小到大排列的数组a[11]={12,30,48,60,68,87,91,95,97,99} 中插入一个正整数x，x的值由用户输入，要求插入后的数组仍然有序，最后输出该数组。

提示，最后输出的格式统一使用"%d "的形式
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[11] = {12,30,48,60,68,87,91,95,97,99};
	int x,i,temp;
	scanf("%d",&x);
	a[10] = x;
	for(i = 10 ;i >= 0;i--)
	{
		if(a[i]<a[i-1])
		{
			temp = a[i - 1];
			a[i - 1] = a[i];
			a[i] = temp;
		}
		else break;
	}
	for(i=0;i<10;i++)
		printf("%d ", a[i]);
	printf("%d",a[10]);
	return 0;
}

