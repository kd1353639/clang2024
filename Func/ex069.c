#include<stdio.h>
main()
{
	int sum, num, cnt;

	sum = 0;
	cnt = 0;
	printf("�����F");

	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("�����F");
	}
	printf("���v=%d ����=%.2f", sum,(float)sum/cnt);
}