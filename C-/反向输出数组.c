//author:�ϵ��
//ʱ�䣺09/11/21 16:44
/*
��һ������Ϊ5�������ֵ���������´�ţ����磬ԭ��˳��Ϊ��8,6,5,4,1��Ҫ���Ϊ��1,4,5,6,8������"%d "����ʽ���
*/
#define N 5
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[N],b[N];
	int i;
	for(i = 0;i < N;i++)
	{
		scanf("%d",&a[i]); 
	 } 
	for(i = 0; i < N;i++)
	{
		b[i] = a[N - i - 1];
		printf("%d ",b[i]);
	}
	return 0;
}

