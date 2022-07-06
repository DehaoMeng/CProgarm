//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
void fun1(float (*p)[6],char (*q)[11])
{
	float sum = 0.0;
	int i;
	
	for(i = 0;i < 4;i++)
	{
		sum += *(*(p + i) + 1);
	}
	
	printf("course 1:%s average score: %10.2f\n",*(q+1),sum/4);
}

void fun2(float (*p)[6],char (*q)[11])
{
	int i,j,n,flag = 0;
	float sum;
	printf("Student who is fail in two courses:\n");
	for(i = 0;i< 4;i++)
	{
		n = 0;
		sum = 0.0;
		
		for(j = 1;j < 6;j++)
		{
			if(*(*(p + i) + j) < 60)
			{
				n ++;
			}
			sum += *(*(p + i) + j); 
		}
		if(n >= 2)
		{
			printf("%s ",*q); 
			for(j=1;j<6;j++)
			{
				printf("%11s",*(q+j));
			}
			printf("    average\n");
			printf("%.0f ",*(*(p+i)));
			for(j = 1;j < 6;j++)
			{
				printf("%10.2f ",*(*(p + i) + j));
			}
			
			printf("%10.2f\n",sum/5);
			flag = 1;
		}
	}
	
	if(flag == 0)
	{
		printf("Î´ÕÒµ½£¡\n"); 
	}
}

void fun3(float (*p)[6],char (*q)[11])
{
	int i,j,n;
	float sum;
	
	for(i = 0;i < 4;i++)
	{
		sum = 0.0;
		n = 0;
		for(j = 1;j < 6;j++)
		{
			if(*(*(p + i) + j) >= 85)
			{
				n++;
			}
			sum += *(*(p + i) + j);
		}
		if(sum / 5 >= 90 || n == 5)
		{
			printf("Students whose score is good:\n");
			printf("%s ",*q);
			for(j=1;j<6;j++)
			{
				printf("%11s",*(q+j));
			}
			printf("    average\n");
			printf("%.0f ",*(*(p+i)));
			for(j = 1;j < 6;j++)
			{
				printf("%10.2f ",*(*(p + i) + j));
			}
			
			printf("%10.2f\n",sum/5);
			
		}
	}
}


int main(void)
{
	char b[6][11]={"NO."},(*q)[11];
	float a[4][6];
	int i,j;
	float (*p)[6];
	p = a;
	q = b+1;
	for(;q<b+6;q++)
	{
		scanf("%s",*q);
	}

	for(i = 0;i < 4;i++)
	{
		for(j = 0;j < 6;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	q = b;
	fun1(p,q);
	fun2(p,q);
	fun3(p,q);
 } 
 

