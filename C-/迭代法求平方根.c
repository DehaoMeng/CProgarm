//author:孟德昊
//时间：
//迭代法求平方根 
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a;
	float x0,x1;	//用户输入a 
	x1 = 1;			//初始化根值 
	scanf("%d",&a);
	do{
		x0 = x1;	//初始化第一根值 
		x1 = (x0 + a / x0)/2.0;		//向真正根植收敛 
	}while(fabs(x0 - x1) > 1e-5);		//当两根值差的绝对值<10的-5次方 结束循环 
	printf("%.3f",x1);					//输出结果 
	return 0;
}

