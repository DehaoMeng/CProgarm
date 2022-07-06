//author:孟德昊
//时间：15/10/21 11:21
//
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	float a,b,c,h,s;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a <= 0 || b <= 0 || c <=0 || a+b <= c || a + c <= b || b + c <= a)
		printf("您输入的三边有误，请重新输入");
		
	else
		{
		h=(a+b+c)/2;
		s=sqrt(h*(h-a)*(h-b)*(h-c));
		printf("三角形的三条边长分别为：%.2f,%.2f,%.2f\n",a,b,c);
		printf("三角形的面积为:s=%.2f",s);
	}
}

