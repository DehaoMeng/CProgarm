//author:孟德昊
//时间：15/10/21 11:13
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14 
main()
{
	float r,h;
	scanf("%f,%f",&r,&h);
	printf("圆周长：%.2f\n",2*PI*r);
	printf("圆面积:%.2f\n",PI*r*r);
	printf("圆球表面积:%.2f\n",4*PI*r*r);
	printf("圆球体积:%.2f\n",4*PI*r*r*r/3);
	printf("圆柱体积:%.2f",h*PI*r*r);
}

