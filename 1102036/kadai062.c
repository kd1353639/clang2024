#include<stdio.h>
main()
{
	int a;
	a = 20;
	do {
		printf("%3d", a);
		a--;
		if (a == 10){
			printf("\n");
		}
	} while (a >= 1);
}