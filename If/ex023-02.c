#include<stdio.h>
main()
{
	int year;

	printf("��������:");
	scanf("%d", &year);

	if (year % 400 == 0) {
		printf("���邤�N�ł�\n");
	}
	else {
		if (year % 4 == 0) {
			if (year % 100 != 0) {
				printf("���邤�N�ł�\n");
			}
			else {
				printf("���N�ł�\n");
			}
		}
		else {
			printf("���N�ł�\n");
		}
	}
}