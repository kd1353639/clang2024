#include<stdio.h>
main()
{
	int a, b;
	printf("����1�H");
	scanf("%d", &a);
	printf("����2�H");
	scanf("%d",	&b);
	if (a > b) {
		printf("%d �̕��� %d ��� %d �傫��\n", a, b, a - b);
	}
	if (a == b) {
		printf("%d �� %d �͓�����\n", a, b);
	}
	if (a < b) {
		printf("%d �̕��� %d ��� %d ������\n", a, b, b - a);
	}
}