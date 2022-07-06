#define _CRT_SECURE_N0_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char sort(char(*p)[6]) {
	int k, j, i;
	char t[6];
	for (i = 0; i < 5; i++) {
		k = i;
		for (j = i + 1; j < 6; j++) {
			if (strcmp(p[j], p[k]) < 0)
				k = j;
		}
		if (k != i) {
			strcpy(t, p[i]);
			strcpy(p[i], p[k]);
			strcpy(p[k], t);
		}
	}   //选择排序法
}
int main() {
	char a[6][6];// = { "china","japan","korea","egypt","burma","nepal " };
	for (int i = 0; i < 6; i++) {
		gets(a+i);
	}
	//字符串的输入部分
	sort(a);
	int i;
	printf("These words are sorted as:\n");
	for (i = 0; i < 6; i++)
		printf("%s\n", *(a+i));
	//字符串的输出方式
	system("pause");
	return 0;
}
