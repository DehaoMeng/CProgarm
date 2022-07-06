//author: 昊昊反思
//time：
/*
将字符数组s2中的全部字符拷贝到字符数组s1中，不用strcpy函数。拷贝时，’\0’也要拷贝过去，’\0’后面的字符不拷贝。s2中的字符由用户输入。
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

