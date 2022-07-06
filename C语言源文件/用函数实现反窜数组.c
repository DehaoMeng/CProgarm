#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char str(char s[]) {
	int n1,t;
	n1 = strlen(s);
	if (n1 % 2 != 0) {
		for (int i = 0, j = n1 - 1; i <(n1-1)/2; i++) {
			t = s[i];
			s[i] = s[j];
			s[j] = t;
			j--;
		}
	}
	else {
		for (int i = 0, j = n1 - 1; i < n1 / 2; i++) {
			t = s[i];
			s[i] = s[j];
			s[j] = t;
			j--;
		}
	}
}
int main() {
	char s[80];
	gets(s);
	str(s);
	puts(s);
	system("pause");
	return 0;
}