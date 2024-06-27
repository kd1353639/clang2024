#include<stdio.h>
main()
{
	int gokei = 0, i;
	i = 1;
	printf("%d", i);
	while (gokei <= 300) {
		printf("+%d", i);
		gokei += i;
		i++;
	}
	printf("=%d", gokei);
}