#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int b;

	srand(time(0));
	rand();

	b = rand() % 41 + 10;
	printf("発生した乱数は%dです\n", b);
}