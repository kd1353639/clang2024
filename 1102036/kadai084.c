#include<stdio.h>
main()
{
	int i, j;

	while (1) {
		printf("����1(-999�ŏI��)�H");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("����2(-999�ŏI��)�H");
		scanf("%d", &j);
		if (j == -999) {
			break;
		}
		if (j == 0) {
			continue;
		}
		printf("%d / %d = %d ���܂� %d\n", i, j, i / j, i % j);

	}
}