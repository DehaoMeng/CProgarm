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
//�ݹ麯��
void move(int array[20], int n, int m)   //nΪ�����ܳ���
{
    int* p;
    int array_end;
    array_end = *(array + n - 1);     //�����������һ������ֵ��array_end
    for (p = array + n - 1; p > array; p--)
        *p = *(p - 1);        //�����и��������ƶ�һλ
    *array = array_end;          //��ԭ�������һλ����ֵ���������һ���� 
    m--;                 //�����ƶ���λ��
    if (m > 0)                      
    {
        move(array, n, m);
    }
}
