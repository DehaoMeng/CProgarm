//author:�ϵ��
//ʱ�䣺06/11/21 23:53
/*
������a={23,56,11,87,91,35,41,44,60,6} �в���һ����x��x��ֵ���û����룬��������ڸ���������������������е�λ�ã�������ʾ�����ڡ�
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[10] = {23,56,11,87,91,35,41,44,60,6}; 
	int n,i;
	scanf("%d",&n);
	for(i = 0;i < 10; i++)
	{
		if(a[i]==n)
		{
			printf("%d position is %d",n,i);
			break;
		}
	}
	if(i == 10)
		printf("%d could not be found",n);
	else
		return 0;
}

