//author: 昊昊反思
//time：
/*
编程实现两字符串的连接，要求：(1)使用字符数组保存字符串，(2)不能使用strcat等库函数。

提示：本题的关键：（1）弄清数组的下标；（2）新的字符串最后要加'\0'
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

