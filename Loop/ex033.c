#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	
	sum = 0;
	cnt = 0;
	printf("���́H ");
	scanf("%d", &i);

	for (; i != -999; ) {
		sum += i;
		cnt++;
		printf("���́H ");
		scanf("%d", &i);
	}
	
	ave = (float)sum / cnt;
	printf("���v= %d \t����= %.2f", sum, ave);
}