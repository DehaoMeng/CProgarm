//author: 昊昊反思
//time：
/*

*/
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1

struct Student
{
	int number;
	float score;
};


int main(void) 
{
	void cal(struct Student* p, int n);
	int i;
	struct Student st[2];
	for (i = 0; i < 2; i++) 
	{
		scanf("%d", &st[i].number);
		scanf("%f", &st[i].score);

	}
	//结构体的输入部分
	printf("num     score\n");
	for (i = 0; i < 2; i++)
	{
		printf("0%d      ", st[i].number);
		printf("%.2f", st[i].score);
		printf("\n");
	}
	printf("\n");
	cal(st, 2);
	return 0;
}

void cal(struct Student* p, int n) 
{
	float sum = 0, avg=0;
	int i;
	for (i = 0; i < n; i++) 
	{
			sum += p[i].score;
	}
	avg = sum / i;
	printf("average %.2f\n",avg);
}
