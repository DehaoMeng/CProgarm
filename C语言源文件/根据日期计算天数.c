#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int num(int year, int month, int day) {
	int number = 0;
	for (int i = 1; i < month; i++) {
		switch (i) {
		case 1:case 3:case 5:case 7:case 8: case 10:case 12:
			number += 31;
			break;
		case 4:case 6:case 9:case 11:
			number += 30;
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				number += 29;
			else
				number += 28;
			break;
		}
	}
	number=number+day;
	return (number);
}
int main() {
	int year, month, day,number;
	scanf("%d,%d,%d", &year, &month, &day);
	number = num(year, month, day);
	printf("%d", number);
	system("pause");
	return 0;
}