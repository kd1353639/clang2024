#include<stdio.h>
main()
{
	float a;
	printf("実数を入れて:");
	scanf("%f", &a);
	printf("２倍すると %3.2f \n", a * 2);
	printf("３倍すると %3.2f \n", a * 3);
}