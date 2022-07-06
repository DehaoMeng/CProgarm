#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int swap(int(* p)[3]) {
	int temp;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++) 
		{
			temp = *(*(p + j) + i);
			*(*(p + j) + i) = *(*(p + i) + j);
			*(*(p + i) + j) = temp;
		}
	}
}
int main() {
	int a[3][3],i,j;
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			scanf("%d", *(a+i)+j);    //зЂвт*(a+i)+j
	}
	swap(a);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", *(*(a + i) + j));    //зЂвт*(*(a+i)+j)
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

