#include<stdio.h>
main()
{
	int i = 1, sum;
	sum = 0;
	printf("%d", i);
	do {
		sum += i;
		i++;
		printf("+%d", i);
	} while (sum < 300);
	printf("=%d", sum + i);
}