#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int main() {
	int  a[4];
	int y, z, i, j,x;
	scanf("%d", &x);
		while(x!=6174){
			a[0] = x / 1000;
			a[1] = x / 100 % 10;
			a[2] = x / 10 % 10;
			a[3] = x % 10;
			for (i = 3; i >= 0; i--) {
				for (j = 0; j < i; j++) {
					int t;
					if (a[j] < a[j + 1]) {
						t = a[j];
						a[j] = a[j + 1];
						a[j + 1] = t;
					}
				}
			}
			y = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
			z = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
			x = y - z;
			printf("%d-%d=%d\n", y, z, x);
		}
		system("pause");
		return 0;
	}
