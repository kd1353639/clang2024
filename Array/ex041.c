#include<stdio.h>
main()
{
	float gokei = 0, a[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("���������:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("���v�� %.2f\n���ς� %.2f\n", gokei, gokei / 3);
}