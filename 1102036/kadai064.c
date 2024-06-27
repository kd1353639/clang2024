#include<stdio.h>
main()
{
	int a;
	a = 20;
	while (a >= 1) {
		printf("%3d", a);
		a--;
		if (a == 10) {
			printf("\n");
		}
	}
}