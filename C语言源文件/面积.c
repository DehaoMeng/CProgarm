//author:�ϵ��
//ʱ�䣺15/10/21 11:21
//
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	float a,b,c,h,s;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a <= 0 || b <= 0 || c <=0 || a+b <= c || a + c <= b || b + c <= a)
		printf("�������������������������");
		
	else
		{
		h=(a+b+c)/2;
		s=sqrt(h*(h-a)*(h-b)*(h-c));
		printf("�����ε������߳��ֱ�Ϊ��%.2f,%.2f,%.2f\n",a,b,c);
		printf("�����ε����Ϊ:s=%.2f",s);
	}
}

