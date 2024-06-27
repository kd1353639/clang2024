#include<stdio.h>
main()
{
	int a;
	a = 1;
	do {
		printf("%3d", a);
		a++;
		if (a == 11) {
			printf("\n");
		}
	} while (a <= 20);
}