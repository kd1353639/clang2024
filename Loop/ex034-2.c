#include<stdio.h>
main()
{
	int i,j;

	printf("”‚ÍH");
	scanf("%d", &i);

	do {
		j = 1;
		do {
			printf("*");
			j++;
		} while (j <= 5);
		printf("\n");
		i--;
	} while (i > 0);
}