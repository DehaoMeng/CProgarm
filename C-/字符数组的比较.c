//author: �껷�˼
//time��14/11/21 16:17
/*
�������ַ���S1��S2�Ƚϣ����S1>S2�����һ��������S1=S2�����0��S1<S2�����һ��������
��Ҫ��strcpy�����������ַ�����gets�������롣��������������ľ���ֵӦ����Ƚϵ������ַ������Ӧ�ַ���ASCII��Ĳ�ֵ��
���磬'A'��'C'��ȣ�����'A'<'C'��Ӧ�������������'A'��'C'�����ֵΪ2�����Ӧ���"-2"��
ͬ��"And"��"Aid"�Ƚϣ����ݵ�2���ַ��ȽϽ����'n'��'i'��5�����Ӧ���"5"��  
*/
#include<string.h>
#include<stdio.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char a[N],b[N];
	int i,k,j;
	gets(a);
	gets(b);
	for(i = 0;i < N;i++)
	{
		if (a[i] == b[i]) continue;
		else
		{
			printf("%d",a[i] - b[i]);
			break; 
		}
	}
	return 0;
}

