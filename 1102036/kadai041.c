#include<stdio.h>
main()
{
	int a, gokei, i;
	float heikin;
	gokei = 0;
	heikin = 0;
	i = 1;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	while (a != -999) {
		gokei += a;
		heikin =(float)gokei / i;
		i++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
	}
	printf("���v = %d\n���� = %.2f\n", gokei, heikin);
}