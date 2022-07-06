//author: 昊昊反思
//time：14/11/21 16:08
/*
第一个字母变成第26个字母，第i个字母变成第（26-i+1）个字母。非字母字符不变，要求编程序将密码回原文，并打印出密码和原文。  
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

