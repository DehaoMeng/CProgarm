//author:�ϵ��
//ʱ�䣺09/11/21 16:45
/*
�ҳ����������ֵ��Сֵ��Ԫ�أ���������кź��кź���ֵ
*/
#define N 3
#define S 2
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i,j,k=100,f,s;
	int a[N][S] = {{7,12},{-3,2},{-1,5}};
	for(i = 0;i < N;i++)
	{
		for(j = 0;j < S;j++)
		{
			if (a[i][j] < k)
			{
				k = a[i][j];
				f = i;
				s = j;
			}
		}
	}
	printf("min is a[%d][%d]=%d",f,s,k);
	return 0;
}

