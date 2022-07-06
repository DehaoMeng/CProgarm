#define _CRT_SECURE_WARNINGS
#include<stdio.h>
#include<stdlib.h>
double average(double b[4][6]) {
	double ave;
	ave = (b[0][1] + b[1][1] + b[2][1] + b[3][1]) / 4;
	return ave;
}
int search(double(*p)[4]) {
	int i, j, flag = 0,m;
	double ave;
	printf("NO.     English   Computer       Math    Physics  Chemistry    average\n");
	for (i = 0; i < 4; i++)
	{
		flag = 0;
		for ( m = 1; m < 6; m++)
		{
			if (*(*(p+i) + m) < 60) {
				flag++;
			}
		}
		if (flag >= 2)
		{
			printf("%.0lf      ", *(*(p + i) + 0));
			for (j = 1; j < 6; j++) {
				printf("%.2lf      ", *(*(p + i) + j));
			}
			ave = (*(*(p + i) + 1) + *(*(p + i) + 2) + *(*(p + i) + 3) + *(*(p + i) + 4) + *(*(p + i) + 5)) / 5;
			printf("%.2lf\n", ave);
		}
	}
}
int sort(double(*p)[6]) {
	int i, j, flag = 0,m;
	double ave=0;
	printf("NO.     English   Computer       Math    Physics  Chemistry    average\n");
	for (i = 0; i < 4; i++)
	{
		flag = 0;
		for (m = 1; m< 6; m++)
		{
			ave += *(*(p + i) + m);
			if (*(*(p+i) + m) >= 85)
			{
				flag++;
			}
		}
		ave = ave / 5;
		if (ave>=90||flag==5)
		{
			printf("%.0lf      ", *(*(p+i) + 0));
			for (j = 1; j < 6; j++) {
				printf("%.2lf      ", *(*(p+i)+ j));
			}
			printf("%.2lf \n", ave);
		}
		ave = 0;
	}
}
int main() {
	char a[6][10] = { "English","Computer","Math","Physics","Chemistry" };
	double b[4][6]= { {101, 34, 56, 88, 99, 89},
		               {102 ,77, 88, 99, 67, 78},
		               {103 ,99 ,90, 87, 86, 89},
		              {104, 78, 89 ,99 ,56 ,77} };
	int i, j;
	printf("course 1:English average score:      %.2lf\n", average(b));
	printf("Student who is fail in two courses:\n");
	search(b);
	printf("Students whose score is good:\n");
	sort(b);
	system("pause");
	return 0;
}
