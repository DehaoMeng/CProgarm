//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<stdlib.h>
#define N 100
#define _CRT_SECURE_NO_WARNINGS 1
int main(void)
{
	FILE *in,*out;
	char ch,infile[N]="in.txt",outfile[10]="out.txt";
	if((in=fopen(infile,"rb"))==NULL)
	{
		printf("txt is not exist!\n");
		exit(0);
	}
	if((out=fopen(outfile,"wb"))==NULL)
	{
		printf("txt is not exist!\n");
		exit(0);
	}
	ch=fgetc(in);
	while(!feof(in))
	{
		fputc(ch,out);
		putchar(ch);
		ch=fgetc(in);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
}

