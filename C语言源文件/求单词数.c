#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char string[400];
	int i, count = 0, word = 0;
	char c;
	gets(string);
	for (i = 0; (c = string[i]) != '\0'; i++) 
	{
		if (c == ' ')word = 0;
		else if (word == 0)
		{
			word = 1;
			count++;
		}
	}
	printf("there are %d words.", count);
	system("pause");
	return 0;
}