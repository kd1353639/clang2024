#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;

	while (1) {
		printf("��������:");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		sum += i;
		cnt++;
	}
	ave = (float)sum / cnt;
	printf("���v = %d\n���� = %.3f", sum, ave);
}