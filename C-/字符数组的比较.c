//author: 昊昊反思
//time：14/11/21 16:17
/*
将两个字符串S1和S2比较，如果S1>S2，输出一个正数；S1=S2，输出0；S1<S2，输出一个负数。
不要用strcpy函数。两个字符串用gets函数读入。输出的正数或负数的绝对值应是相比较的两个字符串相对应字符的ASCII码的差值。
例如，'A'与'C'相比，由于'A'<'C'，应输出负数，由于'A'与'C'的码差值为2，因此应输出"-2"。
同理："And"和"Aid"比较，根据第2个字符比较结果，'n'比'i'大5，因此应输出"5"。  
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

