//author:ÃÏµÂê»
//Ê±¼ä£º20/10/21 10:27
//
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char ch;
	ch = getchar();
	if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch<=64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
		printf("This is an other character");
	else if (ch >= 48 && ch <= 57)
		printf("This is a digit");
	else if (ch >= 65 && ch <= 90)
		printf("This is a capital letter");
	else printf("This is a small letter");
	return 0;
}

