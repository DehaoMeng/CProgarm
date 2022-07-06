#define _CRT_SECYRE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char p(char a[]) {
    int t, n;
    n = strlen(a);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%c", a[i]);
    }
}
int main() {
    int a[80];
    gets(a);
    p(a);
    system("pause");
    return 0;
}