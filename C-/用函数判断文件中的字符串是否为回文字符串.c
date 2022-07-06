//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
void panduan(char str[])
{
	int i;
	if(str!= NULL)
	{
		for(i=0;i<(strlen(str)/2);i++)
		{
			if(str[i] == str[(strlen(str))-i-1])
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		printf("Warning!Str is NULL\n");
	}
	if(i<(strlen(str)/2))
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}
int main(void)
{
	FILE *file;
	char filename[10]="file.txt",str[N];
	if((file=fopen(filename,"rb"))==NULL)
	{
		printf("txt is not exist!\n");
		exit(0);	
	}
	fscanf(file,"%s",str);
	panduan(str);
	fclose(file);
	return 0;
}

