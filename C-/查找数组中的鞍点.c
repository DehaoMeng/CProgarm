//author: 昊昊反思
//time：14/11/21 14:38
/*
找出一个二维数组中的鞍点，即该位置上的元素在该行上最大，
在该列上最小，也可能没有鞍点。 
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
//	for(i = 0;i < 4;i++)		//验证传参成功 
//	{
//		for(j = 0;j < 5;j++)
//		{
//			
//		}
//	}
	for(j = 0; j < 5; j++)			//获取每行最大的数 
	{
		if(k<a[q][j])				//如果k<第一行的数，则重新赋值 
		{
			k = a[q][j]; 
			s = j;					//保存此时的 列值 
		}
		else 						//k>=第一行的数 则继续判断下一次 
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
	for(j = 0; j < 4; j++)			//判断行最大的数是否为所在列最小的数 
	{
		if(b[j] >= k)				//如果k < 此列的数则继续判断 
		{
			if(j == 3 )
			{
				n = 1;
				print(n,q,s,k);
				break;
			}
			continue;
		}
		else if(b[j] <= k)			//如果k > 此列的数则证明次数不是鞍点 
		{
			if(q!=4)
			{
				max(a,q+1);			//重新判断第二行中的最大数是否满足条件 
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
