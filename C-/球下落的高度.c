//author:�ϵ��
//ʱ�䣺
//
#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i;
	double s,h;
	s = 100;			//��ֱ�����һ�ε��˶����� 
	h = 100;		//��ʼ�߶�Ϊ100m  
	for(i = 0; i < 9;i++){				//ѭ���������10�Σ� 
//		s += h*2;							//ÿһ��ѭ��������˶��켣���ܺ� 
		h = h / 2; 						//ÿһ���������ĸ߶� 
		s += h * 2;
	}
	h = h / 2;
	printf("s=%.6f,h=%.6f",s,h);
	return 0;
}

