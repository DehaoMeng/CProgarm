//author: 昊昊反思
//time：
/*
统计输入的正文中有多少单词的程序，这里的单词指的是用空白符分隔开的字符串。也就是输入一行字符，统计其中有多少个单词，单词之间用空格隔开。
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

