//author: �껷�˼
//time��14/11/21 16:08
/*
��һ����ĸ��ɵ�26����ĸ����i����ĸ��ɵڣ�26-i+1������ĸ������ĸ�ַ����䣬Ҫ�����������ԭ�ģ�����ӡ�������ԭ�ġ�  
*/
#include<string.h>
#include<stdio.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char a[N],b[N];
	int i;
	gets(a);
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			b[i] = 'z' - (a[i] - 'a');
		}
		else if(a[i] >= 'A' && a[i] <= 'Z')
		{
			b[i] = 'Z' - (a[i] - 'A');
		}
		else b[i] = a[i];
	} 
	for(i = 0; i < strlen(a); i++)
	{
		printf("%c",a[i]);	
	} 
	printf("\n");
	for(i = 0; i < strlen(b); i++)
	{
		printf("%c",b[i]);	
	}

	return 0;
}

