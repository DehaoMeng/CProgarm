//author: �껷�˼
//time��
/*
���ַ�����s2�е�ȫ���ַ��������ַ�����s1�У�����strcpy����������ʱ����\0��ҲҪ������ȥ����\0��������ַ���������s2�е��ַ����û����롣
*/
#include<stdio.h>
#define N 100
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char s1[N],s2[N];
	int i;
	gets(s2);
	for( i = 0; i < strlen(s1); i++)
	{
		printf("%c",s1[i]);
	}
	for( i = 0; i < strlen(s2); i++)
	{
		if(s2[i] != '\0')
		{
			s1[strlen(s1)] = s2[i];
		}
	}
	s1[strlen(s1)] = '\0';
	for( i = 0; i < strlen(s1); i++)
	{
	printf("%c",s1[i]);
	}
	return 0;
}

