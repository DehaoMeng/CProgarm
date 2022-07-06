#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j,n,sum=0;
    int a[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }

    for (i = 2; i < n; i++) {
        for (j = 1; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
  
    for (i = 0; i <n; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
    for (j = 0; j < n; j++) {
        i = n-1;
        sum += a[i][j];
    }
    printf("%3d", sum);
system("pause");
	return 0;
}
1
1 2 1
1 3 3 1
1 4 6 4 1
