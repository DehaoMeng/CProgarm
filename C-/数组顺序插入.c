//author:�ϵ��
//ʱ�䣺06/11/21 23:53
/*
���Ѿ�������С�������е�����a[11]={12,30,48,60,68,87,91,95,97,99} �в���һ��������x��x��ֵ���û����룬Ҫ�������������Ȼ���������������顣

��ʾ���������ĸ�ʽͳһʹ��"%d "����ʽ
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[11] = {12,30,48,60,68,87,91,95,97,99};
	int x,i,temp;
	scanf("%d",&x);
	a[10] = x;
	for(i = 10 ;i >= 0;i--)
	{
		if(a[i]<a[i-1])
		{
			temp = a[i - 1];
			a[i - 1] = a[i];
			a[i] = temp;
		}
		else break;
	}
	for(i=0;i<10;i++)
		printf("%d ", a[i]);
	printf("%d",a[10]);
	return 0;
}

