//author:�ϵ��
//ʱ�䣺
//�����������������Լ������С������ 
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int division(int m, int n);
int least_common_multiple(int m, int n,int p);

int main()
{
	int m,n,r,p,s,multiple;
	scanf("%d,%d",&m,&n);
	s = m;
	p = n;
	if (p>s) {
		 s = n;
		 p = m;
	}
	r = division(s,p);
	while(r != 0){		//շת����������Լ�� 
	s = p;
	p = r;
	r = division(s,p);	
	}
	multiple = least_common_multiple( m, n, p);
	printf("%d\n%d",p,multiple);
//	printf("%d",p);
	return 0;
}

int division(int m, int n)		//�����Լ�� 
{
	int s;
	s = m % n;
	return s;
}

int least_common_multiple(int m, int n, int p)			//����С������ 
{
	int q;
	q = m * n / p;
	return q; 
}
