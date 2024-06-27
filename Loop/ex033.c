#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	
	sum = 0;
	cnt = 0;
	printf("”‚ÍH ");
	scanf("%d", &i);

	for (; i != -999; ) {
		sum += i;
		cnt++;
		printf("”‚ÍH ");
		scanf("%d", &i);
	}
	
	ave = (float)sum / cnt;
	printf("‡Œv= %d \t•½‹Ï= %.2f", sum, ave);
}