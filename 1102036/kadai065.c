#include<stdio.h>
main()
{
	int i, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	printf("����(-999�ŏI��)");
	scanf("%d", &i);
	do {
		sum += i;
		cnt++;
		printf("����(-999�ŏI��)");
		scanf("%d", &i);
	} while (i != -999);
	ave = (float)sum / cnt;
	printf("���v = %d   ���� = %f", sum, ave);
}