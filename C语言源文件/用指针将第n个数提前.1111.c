#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void move(int[20], int, int);
int main(void)
{
    int numbers[20];
    int i, n, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    scanf("%d", &m);
    move(numbers, n, m);
    for (i = 0; i < n; i++)
        printf("%d ", numbers[i]);
    printf("\n");
    system("pause");
    return 0;
}
//递归函数
void move(int array[20], int n, int m)   //n为数列总长度
{
    int* p;
    int array_end;
    array_end = *(array + n - 1);     //将该数组最后一个数赋值给array_end
    for (p = array + n - 1; p > array; p--)
        *p = *(p - 1);        //将数列各数往后移动一位
    *array = array_end;          //将原数组最后一位数赋值给现数组第一个数 
    m--;                 //控制移动的位数
    if (m > 0)                      
    {
        move(array, n, m);
    }
}
