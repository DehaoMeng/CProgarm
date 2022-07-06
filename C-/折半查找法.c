//author: 昊昊反思
//time：14/11/21 14:59
/*
有个15数按由小到大顺序存放在一个数组{1,4,9,13,21,34,55,89,144,233,377,570,671,703,812}中，输入一个数，要求用折半查找法找出该数组中第几个（数组的）元素的值。
*/
#include<string.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
void find_num(int a[15],int c,int min,int max,int mid);
int main()
{
	int a[15] = {1,4,9,13,21,34,55,89,144,233,377,570,671,703,812};
	int mid,max,min,k,c;
	scanf("%d",&c); 
	mid = 0;
	max = 14;
	min = (mid + max) / 2;
	find_num(a,c,min,max,mid);
	return 0;
}


void find_num(int a[15],int c,int min,int max,int mid)
{
    if(max - mid >= 1)
    {
        if ( c == a[min] )
            printf("The position of %d is at (%d).",c,min);
        else if ( c == a[max] )
            printf("The position of %d is at (%d).",c,max);
        else if ( c == a[mid] )
            printf("The position of %d is at (%d).",c,mid);
        else if ( c > a[mid])
        {
            min = mid;
            mid = (int)(mid + max + 1 ) / 2;
            find_num(a, c, min, max, mid);
        }
        else if ( c < a[mid] )
        {
            max = mid;
            mid = (mid + min ) / 2;
            find_num(a, c, min, max,mid);
        }
	}
    else
        printf("%d is not inside this array.",c);
}
