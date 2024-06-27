#include<stdio.h>
main()
{
	int a, gokei, i;
	float heikin;
	gokei = 0;
	heikin = 0;
	i = 1;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	while (a != -999) {
		gokei += a;
		heikin =(float)gokei / i;
		i++;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
	}
	printf("合計 = %d\n平均 = %.2f\n", gokei, heikin);
}