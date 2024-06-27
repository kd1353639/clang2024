#include<stdio.h>
main()
{
	int gokei = 0, ia = 1;
	while (gokei<=300) {
		printf("%d+",ia);
		gokei += ia;
		ia++;
	}
	printf("\b = %d\n",gokei);
}