#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	
	sum = 0;
	cnt = 0;
	printf("数は？ ");
	scanf("%d", &i);

	for (; i != -999; ) {
		sum += i;
		cnt++;
		printf("数は？ ");
		scanf("%d", &i);
	}
	
	ave = (float)sum / cnt;
	printf("合計= %d \t平均= %.2f", sum, ave);
}