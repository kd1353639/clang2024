#include<stdio.h>
main()
{
	float a, b, c;
	printf("１つ目の実数:");
	scanf("%f", &a);
	printf("２つ目の実数:");
	scanf("%f", &b);
	printf("３つ目の実数:");
	scanf("%f", &c);
	float d;
	d = a + b + c;
	printf("合計 = %.2f 平均 = %.2f \n", a + b + c, d / 3);
}