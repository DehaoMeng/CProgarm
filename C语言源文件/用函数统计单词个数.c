#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int p(char str[80])
{
	int i, count = 0, word = 0;
	char c;	
	for (i = 0; (c = str[i]) != '\0'; i++)
		if (c == ' ')word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
	return (count);
}
int main() {
	char str[80];
	int count;
	gets(str);
	count = p(str);
	printf("%d", count);
	system("pause");
	return 0;
}
	