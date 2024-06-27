#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;

	while (1) {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		if (i < 0) {
			continue;
		}
		sum += i;
		cnt++;
	}
	ave = (float)sum / cnt;
	printf("‡Œv = %d\n•½‹Ï = %.3f", sum, ave);
}