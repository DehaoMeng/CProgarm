#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100], b, i, n, c, d;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	scanf("%d %d", &c, &d);
	printf("before  insert: ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	for (i = n; i >= c; i--)
		a[i] = a[i - 1];
	a[c - 1] = d;
	printf("\nInput the position and inserted number:");
	printf("\nAfter  insert: ");
	for (i = 0; i < n + 1; i++)
		printf("%d ", a[i]);

}




