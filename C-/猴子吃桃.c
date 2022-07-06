//author:孟德昊
//时间：
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int x,i;		//声明没前一天剩余x个
	x = 1;			//定义第十天剩余1个桃子 
	for(i = 0;i < 9;i++)
	{
		x = ( x + 1 ) * 2;
	 } 
	printf("%d",x);
	return 0;
}

