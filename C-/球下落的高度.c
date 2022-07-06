//author:孟德昊
//时间：
//
#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i;
	double s,h;
	s = 100;			//径直下落第一次的运动距离 
	h = 100;		//初始高度为100m  
	for(i = 0; i < 9;i++){				//循环下落次数10次； 
//		s += h*2;							//每一次循环下落后运动轨迹的总和 
		h = h / 2; 						//每一次下落后弹起的高度 
		s += h * 2;
	}
	h = h / 2;
	printf("s=%.6f,h=%.6f",s,h);
	return 0;
}

