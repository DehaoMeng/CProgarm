//author:�ϵ��
//ʱ�䣺15/10/21 11:13
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14 
main()
{
	float r,h;
	scanf("%f,%f",&r,&h);
	printf("Բ�ܳ���%.2f\n",2*PI*r);
	printf("Բ���:%.2f\n",PI*r*r);
	printf("Բ������:%.2f\n",4*PI*r*r);
	printf("Բ�����:%.2f\n",4*PI*r*r*r/3);
	printf("Բ�����:%.2f",h*PI*r*r);
}

