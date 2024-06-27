#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	int i, j;
	
	printf("”z—ña =");
	for (i = 0; i < 10; i++) {
		c[i] = a[i];
		printf(" %d", a[i]);
	}
	printf("\n”z—ñc =");
	for (j = 9; j >= 0; j--) {
		printf(" %d", c[j]);
	}
	
	
}