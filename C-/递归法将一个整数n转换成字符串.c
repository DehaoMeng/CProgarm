//author: �껷�˼
//time��
/*
 �õݹ鷨��һ������nת�����ַ���
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
 
void convert(int n)
{
	int i;
	if ((i = n / 10) != 0)
		convert(i);
	putchar(n % 10 + '0');
}
 
int main(void)
{
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("-");
		num = -num;
	}
	convert(num);
	printf("\n");
	return 0;
}
