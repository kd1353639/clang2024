#include<stdio.h>
main()
{
	float gokei = 0, a[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("‡Œv‚Í %.2f\n•½‹Ï‚Í %.2f\n", gokei, gokei / 3);
}