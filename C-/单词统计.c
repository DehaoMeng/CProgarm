//author: �껷�˼
//time��
/*
ͳ��������������ж��ٵ��ʵĳ�������ĵ���ָ�����ÿհ׷��ָ������ַ�����Ҳ��������һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո������
*/
#define N 100
#include<string.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char a[N];
	int i,count = 0;
	gets(a);
	for( i = 0; i <= strlen(a); i++)
	{
		if(a[i] == ' ' || a[i] == '\0')
		{
			count++;
		}
	}
	printf("There are %d words.",count);
	return 0;
}

