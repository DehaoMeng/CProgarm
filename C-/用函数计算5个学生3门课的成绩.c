//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
double aves(double a, double b, double c) 
{
	double ave1;
	ave1 = (a + b + c) / 3;
	return(ave1);
}
float aveg(float a, float b, float c, float d, float e) 
{
	float ave2;
	ave2 = (a + b + c + d + e) / 5;
	return(ave2);
}
void maxinization(double a[5][3]) {
	double max = 0;
	int x,y,i,j;
	for (i = 0; i < 5; i++) {
		for(j=0;j<3;j++)
			if (a[i][j] > max) {
				max = a[i][j];
				x = i;
				y = j;
			}
	}
	printf("The highest score is: %.2lf. Student No. %d. Course No. %d.\n", a[x][y], x + 1, y + 1);
}

void var(double a[5][3])
{
	double m[5], sum1 = 0,sum2=0,result;
	int i;
	for (i = 0; i < 5; i++) {
		m[i]= aves(a[i][0], a[i][1], a[i][2]);		
	}
	for (i = 0; i < 5; i++) {
		sum1 += (m[i] * m[i]);
	}
	for (i = 0; i < 5; i++) {
		sum2 += m[i];		
	}	
	result = sum1 / 5 - (sum2*sum2) / 25;
	printf("The variance is: %.2lf.",result);
}
int main(void)
{
	double a[5][3];
	int i, j;
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf("%lf", &a[i][j]);
		}
	}
	printf("No.  course1 course2 course3 average\n");
	for (i = 0; i < 5; i++) 
	{
		printf("% d    ", i + 1);
		for (j = 0; j < 3; j++) 
		{
			printf("%.2lf   ", a[i][j]);			
		}			
			printf("%.2lf   ", aves(a[i][0], a[i][1], a[i][2]));
			printf("\n");		
	}
	printf("ave   ");
	for (j = 0; j < 3; j++) 
	{
		printf("%.2f   ", aveg(a[0][j], a[1][j], a[2][j], a[3][j], a[4][j]));
	}
	printf("\n");
	maxinization(a);
	var(a);
	system("pause");
	return 0;
}
