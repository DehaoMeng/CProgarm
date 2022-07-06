#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int line, i, j, n;
	scanf("%d", &line);
	while (line % 2 == 0)
		scanf("%d", &line);
	 for (i=0; i <= (line / 2) + 1; i++) {
			for (n = (line / 2) + 1; n > i; n--) {
				printf(" ");
			}
			for (j=1; j <= 2 * i - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		for (i=1; i <= (line / 2); i++) {
			for (n=1; n < i + 1; n++) {
				printf(" ");
			}
			for (j = line; j > 2 * i; j--) {
				printf("*");
			}
			printf("\n");
		}
	system("pause");
	return 0;
}