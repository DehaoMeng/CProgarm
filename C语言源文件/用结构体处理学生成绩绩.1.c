#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int number;
	char name[20];
	float score[3];
};
float cal(struct student* p, int n) {
	float sum = 0, avg;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			sum += p[i].score[j];
		}
	}
	avg = sum / n / 3;
	printf("The average score of these students is:  %.2f\n",avg);
}
void high(struct student* p, int n) {
	int t;
	float max = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = p[i].score[0] + p[i].score[1] + p[i].score[2];
		if (sum > max) {
			max = sum;
			t = i;
		}	
	}
	printf("The highest total score is: %.2f. No.%d, %s", max, t+1, p[t].name);
}
void input(){

}
int main() {
	int i, j;
	struct student st[3];
	for (i = 0; i < 3; i++) {
		scanf("%d", &st[i].number);
		scanf("%s", &st[i].name);
		for (j = 0; j < 3; j++) 
		{
			scanf("%f", &st[i].score[j]);
		}
	}
	//结构体的输入部分
	printf("No. name  score1 score2 score3\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", st[i].number);
		printf("%-6s  ", st[i].name);
		printf("%.2f  %.2f  %.2f", st[i].score[0], st[i].score[1], st[i].score[2]);
		printf("\n");
	}
	//结构体的输出部分
	printf("\n");
	cal(st, 3);
	high(st, 3);
	system("pause");
	return 0;
}