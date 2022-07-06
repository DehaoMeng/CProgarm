#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, a[100],i,t,j,count=0,score;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    scanf("%d", &score);
    for (j = 0; j < n; j++) {
        if (a[j] == a[j + 1]);
        else if (a[j] > a[j + 1]) {
            if (score <= a[j])
                count++;
        }
    }
    printf("%d", count);
    system("pause");
    return 0;
}