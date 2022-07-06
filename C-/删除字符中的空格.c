//author: 昊昊反思
//time：
/*
删除字符串str中的空格。
*/
#include<stdio.h>
#include<string.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char s1[N],s2[N];
	int i,j;
	gets(s1);
	for(i = 0; i < strlen(s1); i++ )
	{
		if(s1[i] == ' ')
		{
			for(j = i; j < strlen(s1);j++)
			{
				s1[j] = s1[j+1];
				
			}
		}
	}
	printf("The new string is: ");
	for(i = 0;i<strlen(s1);i++)
	{
		printf("%c",s1[i]);
	}
	printf("\n");
	return 0;
}

