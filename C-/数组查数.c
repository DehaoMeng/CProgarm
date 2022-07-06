//author:孟德昊
//时间：06/11/21 23:53
/*
在数组a={23,56,11,87,91,35,41,44,60,6} 中查找一个数x，x的值由用户输入，若数组存在该数，则输出该数在数组中的位置，否则提示不存在。
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[10] = {23,56,11,87,91,35,41,44,60,6}; 
	int n,i;
	scanf("%d",&n);
	for(i = 0;i < 10; i++)
	{
		if(a[i]==n)
		{
			printf("%d position is %d",n,i);
			break;
		}
	}
	if(i == 10)
		printf("%d could not be found",n);
	else
		return 0;
}

