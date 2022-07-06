#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
    int main(){
        int a[100], b[100], m, n, i, j = 0, k = 0, sum1=0, sum2=0,f;
        scanf("%d %d", &m, &n);
        for (i = m - 1; i >0; i--) {
            if (m % i == 0) {
                a[j] = i;
                 j++;
            }
        }
        for (i = n- 1; i >0; i--) {
            if (n % i == 0) {
                b[k] = i;
                k++;
            }
        }
        printf("%d,", m);
        for (i = 0; i < j; i++) {
            sum1 += a[i];
            if (i != j - 1)
                printf("%d+", a[i]);
            else
                printf("%d=%d", a[i], sum1);
        }
        printf("\n%d,", n);
        for (i = 0; i < k; i++) {
            sum2 += b[i];
            if (i != k - 1)
                printf("%d+", b[i]);
            else
                printf("%d=%d", b[i], sum2); 
        }

        if (sum1 == n && sum2 == m)
            printf("\n1");
        else printf("\n0");
        system("pause");
        return 0;
     }
