//author: �껷�˼
//time��
/*
���ʵ�����ַ��������ӣ�Ҫ��(1)ʹ���ַ����鱣���ַ�����(2)����ʹ��strcat�ȿ⺯����

��ʾ������Ĺؼ�����1��Ū��������±ꣻ��2���µ��ַ������Ҫ��'\0'
*/
#include<stdio.h>
#include<string.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int i, j; 
	char a[N],b[N],c[N];
	gets(a);
	gets(b);
	for ( i = 0; i < strlen(a); i++)
	{
		if(a[i] != '\0')
		{
		c[i] = a[i];
		}
		else break;
	}
	for(j = 0 ; j < strlen(b); j++, i++)
	{
		c[i] = b[j];
	}
	for(i = 0; i < strlen(c);i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}

