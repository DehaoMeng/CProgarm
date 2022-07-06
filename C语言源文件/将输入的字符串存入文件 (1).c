#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE* fp;
	char ch, file[] = { "file.txt" };
	if ((fp = fopen(file, "w")) == NULL)
	{
		printf("cannot open file\n");
		exit(0);
	}
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	system("pause");
	return 0;
}
