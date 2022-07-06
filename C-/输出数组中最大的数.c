//author:孟德昊
//时间：06/11/21 22:58
/*输入5个100以内的整数，用数组存储，
然后找出其中值最大的，并输出最大值及其下标。*/
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	int a[5],i,s,k;
	for (i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);	//		3 4 8 1 5
	}
	k = 0;
	for(i = 1; i < 5; i++)
	{
		if(a[i] > a[i - 1])		 // i = 1 4>3  k<4 k = 4, s = 1 ; i = 2  8>4  k<8 k = 8,s = 2;    i = 4 5 > 1	k > 5  k = 8 , s = 2 		
		{
			if(k < a[i])
			{
				k = a[i];
				s = i;
			}
		}
		else
		{
			if(k < a[i - 1])		//i = 3  1 < 8  k = 8 k=8 s = 2;
			{
				k = a[i - 1];
				s = i - 1;
			}
		}
	}
	printf("max=%d,p=%d",k,s);
	return 0;
}

