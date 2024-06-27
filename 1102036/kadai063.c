#include<stdio.h>
main()
{
	int a;
	a = 1;
	while (a <= 20) {
		printf("%3d", a);
		a++;
		if (a == 11) {
			printf("\n");
		}
	}
}