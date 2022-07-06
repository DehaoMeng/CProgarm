#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
int main() {
	int swap(int* a, int* b);
    int transform(int* a, int n);
    int print(int* a, int n);
	int b[5][5];// = { 35 ,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	transform(*b, 5);
	printf("The handaled matrix is:\n");
	print(*b, 5);
	system("pause");
	return 0;
}
int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int transform(int* a, int n)
{
	int max = a[0], min0 = a[0], min1 = a[0], min2 = a[0], min3 = a[0];      //存值
	int maxx= 0, minx[4] = {0,0,0,0};                                    //存下标
	for (int i = 0; i < n * n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxx = i;
		}
		if (a[i] < min0)
		{
			min3 = min2;
			min2 = min1;
			min1 = min0;
			min0 = a[i];         //有bug 最好用冒泡排序
			minx[3] = minx[2];
			minx[2] = minx[1];
			minx[1] = minx[0];
			minx[0] = i;
		}
	}
	int c = (n * n) / 2;
	swap(&a[c], &a[maxx]);     //注意
	int change[4];
	change[0] = 0;
	change[1] = n - 1;
	change[2] = n * (n - 1);
	change[3] = (n * n) - 1;                   //存下标
	for (int i = 0; i < 4; i++) {
		swap(&a[change[i]], &a[minx[i]]);      //用一次换完整个函数
	}
}
int print(int* a, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", *(a + (i * n) + j));            //可用*(*(a+i)+j)输出
		}
		printf("\n");
	}
}

