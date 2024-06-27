#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	printf("®”(-999‚ÅI—¹)");
	scanf("%d", &i);
	do {
		sum += i;
		cnt++;
		printf("®”(-999‚ÅI—¹)");
		scanf("%d", &i);
	} while (i != -999);
	ave = (float)sum / cnt;
	printf("‡Œv = %d   •½‹Ï = %f", sum, ave);
}