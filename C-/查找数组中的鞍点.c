//author: �껷�˼
//time��14/11/21 14:38
/*
�ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ��������
�ڸ�������С��Ҳ����û�а��㡣 
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
void min(int a[4][5],int k, int b[4],int q,int s);
int print(int n,int q,int s,int k);
void max(int a[4][5],int q);
int main()
{
	int a[4][5], i, j,q;
	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	q = 0;
	max(a,q);
	return 0;
}

void max(int a[4][5],int q)
{
	int k,j,f;
	int b[4];
	k = 0;
//	for(i = 0;i < 4;i++)		//��֤���γɹ� 
//	{
//		for(j = 0;j < 5;j++)
//		{
//			
//		}
//	}
	for(j = 0; j < 5; j++)			//��ȡÿ�������� 
	{
		if(k<a[q][j])				//���k<��һ�е����������¸�ֵ 
		{
			k = a[q][j]; 
			s = j;					//�����ʱ�� ��ֵ 
		}
		else 						//k>=��һ�е��� ������ж���һ�� 
		{
			continue;
		}
	}
//	printf("%d,%d,%d\n",s,q,k);
	for(f = 0;f < 4; f++)
	{
		b[f] = a[f][s];
	}
//	for(f = 0;f < 4; f++)
//	{
//		printf("%d",b[f]);
//	}
	min(a,k,b,q,s);
}
void min(int a[4][5],int k, int 	b[4],int q,int s)
{
	int j,n;
	for(j = 0; j < 4; j++)			//�ж����������Ƿ�Ϊ��������С���� 
	{
		if(b[j] >= k)				//���k < ���е���������ж� 
		{
			if(j == 3 )
			{
				n = 1;
				print(n,q,s,k);
				break;
			}
			continue;
		}
		else if(b[j] <= k)			//���k > ���е�����֤���������ǰ��� 
		{
			if(q!=4)
			{
				max(a,q+1);			//�����жϵڶ����е�������Ƿ��������� 
			}
			if(q == 4){
				n = 0;
				print(n,q,s,k);	
			}
			break;
		}
	}
}

int print(int n,int q,int s,int k)
{
	if(n == 1) 
	{
		printf("a[%d][%d]=%d\n",q,s,k);
		return 0;
	}
	if(n == 0)
	{
		printf("It is not exist.\n");
		return 0;
	}
}
