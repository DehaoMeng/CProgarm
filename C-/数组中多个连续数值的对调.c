//author: ê»ê»·´Ë¼
//time£º
/*

*/
#include<stdio.h>
#include<stdlib.h>
void convet(int* arr, int n);
void Reverse(int *arr,int p,int q);

int main()
{
	int* arr, n;
	while (scanf("%d", &n))
	{
		arr = (int*)malloc(n * sizeof(int));
		int i;
		for (i = 0; i < n; i++)
			scanf("%d", arr + i);
		convet(arr, n);
		for (i = 0; i < n; i++)
			printf("%d ", arr[i]);
		free(arr);
		break;
	}
	return 0;
}

void convet(int* arr, int n)
{
	int m;
	scanf("%d",&m);
	if (m<0 || m>n)
		return ;
	else
	{
		Reverse(arr, 0, n - m - 1);
		Reverse(arr, n - m, n - 1);
		Reverse(arr, 0, n - 1);
	}
}

void Reverse(int* arr, int p, int q)
{
	int temp,i,j;
	for (i = p, j = q; i < j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}


