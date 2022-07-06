#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[100],n,i,j,data;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &j);
	data = a[j-1];
		for (i =j-1; i<=n; i++)
		{
			a[i] = a[i+1];
		}
		a[n - 1] = data;
		for (i = 0; i < n ; i++)
		{
			printf("%d ", a[i]);
		}
		system("pause");
		return 0;
}