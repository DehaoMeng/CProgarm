#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define swap(a,b) {a=a+b;b=a-b;a=a-b;}
int swapValue(int a, int b) {
	int t;
	t = a;
	a = b;
	b = t;
}
int swapPointer(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int a, b;
	scanf("%d,%d", &a, &b);
	swap(a,b);
    printf("The result of SWAP is: a=%d,b=%d\n", a, b);
	swap(a, b);
	swapValue(a, b);
	printf("The result of swapValue is: a=%d,b=%d\n", a, b);
	int* p, * q;
	p = &a;
	q = &b;
	swapPointer(p, q);
	printf("The result of swapPointer is: a=%d,b=%d", *p, *q);
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* fp;
	int i = 0;
	char str[100];
	printf("�������ַ����������Ը�̾��!����:\n");
	if ((fp = fopen("test.txt", "w")) == NULL)//������ļ���ʹfpָ����ļ�
	{
		printf("�޷��򿪴��ļ�!\n");//����򿪳��������򲻿�����Ϣ
		exit(0);//�˳�����
	}
	gets(str);
	int count = 0;
	while (str[i] != '!')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		fputc(str[i], fp);//���������ַ�,��str��ָ����ַ�,�������fpָ����ļ���
		i++;
		count++;
	}
	printf("���ַ�%d��", count);
	printf("\n");
	fclose(fp);
	//��ת������ַ������
	if ((fp = fopen("test.txt", "r")) == NULL)
	{
		printf("File open falied!\n");
		exit(0);
	}
	printf("ת������ַ�����:\n");
	puts(fgets(str, strlen(str) + 1, fp));//���ļ���ȡһ���ַ���,������strlen(str),������ʾ����
	fclose(fp);
	return 0;
}
