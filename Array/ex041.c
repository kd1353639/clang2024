#include<stdio.h>
main()
{
	float gokei = 0, a[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("実数を入力:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("合計は %.2f\n平均は %.2f\n", gokei, gokei / 3);
}