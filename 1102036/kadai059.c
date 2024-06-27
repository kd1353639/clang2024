#include<stdio.h>
main()
{
	int a = 1, i, j, k, l;
	printf("   ");
	for (i = 0; i < 9; i++) {
		printf("%3d", i + 1);
	}
	printf("\n=============================\n");
	for (j = 0; j < 9; j++) {
		printf("%d |", j + 1);
		for (k = 0; k < 9; k++) {
			l = (k + 1) * (j + 1);
			printf("%3d", l);
		}
		printf("\n");
	}
}