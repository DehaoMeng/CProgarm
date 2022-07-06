#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int s(int a[10]) {
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
}
int swap(int a[10]) {
    int max = a[0],i,m,min=a[0],n;
    for (i = 1; i < 10; i++) {
        if (max < a[i]) {
            max = a[i];
            m = i;
        }
    }
    int t;
    t = a[9];
    a[9] = max;
    a[m] = t;
    for (i = 1; i < 10; i++) {
        if (min > a[i]) {
            min = a[i];
            n = i;
        }
    }
    t = a[0];
    a[0] = min;
    a[n] = t;
}
int p(int a[10]) {
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}
int main() {
    int a[10];
    s(a);
    swap(a);
    p(a);
    system("pause");
    return 0;
}