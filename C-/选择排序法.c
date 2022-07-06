//author:孟德昊
//时间：07/11/21 00:10
/*
用选择排序法对数组{0,15,8,4,13,6,10,17,19,1}进行排序，每个元素的输出采用" %d"的形式
*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
void swap(int *a,int *b);
int main()
{
	int i,j,min;
	int a[10]= {0,15,8,4,13,6,10,17,19,1};
    for (i = 0 ; i < 9 ; i++)
    {
        min = i;
        for (j = i + 1; j < 10; j++)
            {if (a[j] < a[min])    
                min = j;
			}
		swap(&a[min], &a[i]);
	}
	for(i = 0;i < 9;i++)
		printf("%d ",a[i]);
	printf("%d",a[9]);
}
void swap(int *a,int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
