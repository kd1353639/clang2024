#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a;

	srand(time(0));
	rand();
	a = rand() % 101 + 1;
	printf("”­¶‚µ‚½—”‚Í%d‚Å‚·\n", a);
}