#include<stdio.h>
main()
{
	int i, j, k;
	int c[10];
	k = 0;
	for (j = 0; j < 10; j++) {
		printf("Ž(-999ĹIš)");
		scanf("%d", &c[j]);
		k++;
		if (c[j] == -999) {
			break;
		}
	}
	printf("zńc =");
	for (j = 0; j < k - 1; j++) {
		printf(" %d ", c[j]);
	}
}