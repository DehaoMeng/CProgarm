//author:�ϵ��
//ʱ�䣺24/10/21 19:23
//�ж������Ƿ����ĸ�Բ�ڣ��ڼ��߶�Ϊ10�����ڼ�Ϊ0�� 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
main()
{
	float x,y;
	scanf("%f,%f",&x,&y);
	if(x >= -3 && x <= -1 || x <= 3 && x >= 1){
		if(y >= -3 && y <= -1 || y <= 3 && y >= 1) printf("%d",10);
		else printf("%d",0);
	}
	else printf("%d",0);
}

