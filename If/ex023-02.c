#include<stdio.h>
main()
{
	int year;

	printf("西暦を入力:");
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("うるう年です\n");
	}
	else {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				printf("うるう年です\n");
			}
			else {
				printf("平年です\n");
			}
		}
		else {
			printf("平年です\n");
		}
	}
}