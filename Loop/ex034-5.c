#include<stdio.h>
main()
{
	int i, j, k;
	printf("”‚ÍH:");
	scanf("%d", &i);

	for (k = 0; k < i; k++) {

		for (j = 0; j < i-k-1; j++) {
			printf(" ");
		}
		for (j = 0; j <= k; j++) {
			printf("*");
		}
		printf("\n");
	}
}