//author:�ϵ��
//ʱ�䣺
//��һ���ַ����ֱ�ͳ�Ƴ����е�Ӣ����ĸ�����֡��ո�������ַ���ע���Ⱥ�˳�򣩵ĸ�����
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char c;
	int letters=0,space=0,digit=0,other=0;
	while ((c=getchar())!='\n')
 		{
 			if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z')
 				{
 						letters++;
 				}
 			else if (c == ' ')
				{
 					space++;
				}
			else if (c >= '0'&&c <= '9')
				{
 					digit++;
				}
			else
				{
					other++;
				}
	}

	printf("i=%d,j=%d,k=%d,l=%d",letters,space,digit,other);
	return 0;
}
