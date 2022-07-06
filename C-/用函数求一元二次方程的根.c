//author: 昊昊反思
//time：20/11/21 12:38
/*
求方程ax2+bx+c=0的根，用三个函数分别求当b2-4ac大于0、等于0、和小于0时的根，并输出结果。
*/
#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS 1
int count=0;
float num_answer(float a,float b,float c)
{
	return b*b-4*a*c;
}

void answer_one(float a,float b,float c)
{
	printf("x1=x2=%.2f",-b/2*a);
}

void answer_two(float a,float b,float c)
{
	if(count == 0)
	{
		printf("x1=%.2f	",(-b+sqrt(num_answer(a,b,c)))/(2*a));
		count++;
		answer_two(a,b,c);
	}
	else if(count == 1)
	{
		printf("x2=%.2f",(-b-sqrt(num_answer(a,b,c)))/(2*a));
	}
	 
}

void answer_complex(float a,float b,float c)
{
	float p,q;
	p = -b/2*a;
	q = sqrt(-num_answer(a,b,c))/(2*a);
	printf("%.3f+%.3fi\n",p,q);
	printf("%.3f-%.3fi",p,q);
}

int main()
{
	float a,b,c;	
	scanf("%f %f %f",&a,&b,&c);

	if(num_answer(a,b,c) == 0)
	{
		answer_one(a,b,c);
	} 
	
	else if(num_answer(a,b,c) > 0)
	{
		answer_two(a,b,c);
	} 
	
	else
	{
		answer_complex(a,b,c);
	}
	 
	return 0;
}

