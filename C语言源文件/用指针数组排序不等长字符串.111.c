#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char sort(char* pt[], int number);
	char print(char* pt[], int number);
	char str[5][20]; 
	char* p[6];    
	//ע��
	for (int i = 0; i < 5; i++)
		p[i] = str[i];                     
	for (int i = 0; i < 5; i++)
		gets(str[i]);               //��ÿһ���ַ�����ֵ����ͬ�е�ָ��
	int n = 5;
	sort(p, n); 
	printf("These strings are sorted as:\n");
	print(p, n);
	system("pause");
	return 0;
}
char sort(char* pt[], int number)      //*pt[4]Ϊÿһ��Ԫ�ض�������ָ�������     ָ������   Ҫ��(*p)[4]�ֿ�
{
	char* temp;
	int i, j;
	for (i = 0; i < number - 1; i++)
		for (j = i + 1; j < number; j++)
			if (strcmp(pt[i], pt[j]) > 0)
			{
				temp = pt[i];
				pt[i] = pt[j];
				pt[j] = temp;
			}
}
char print(char* pt[], int number)
{
	int i;
	for (i = 0; i < number; i++)
		printf("%s\n", pt[i]);
}