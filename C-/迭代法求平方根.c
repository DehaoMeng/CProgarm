//author:�ϵ��
//ʱ�䣺
//��������ƽ���� 
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a;
	float x0,x1;	//�û�����a 
	x1 = 1;			//��ʼ����ֵ 
	scanf("%d",&a);
	do{
		x0 = x1;	//��ʼ����һ��ֵ 
		x1 = (x0 + a / x0)/2.0;		//��������ֲ���� 
	}while(fabs(x0 - x1) > 1e-5);		//������ֵ��ľ���ֵ<10��-5�η� ����ѭ�� 
	printf("%.3f",x1);					//������ 
	return 0;
}

