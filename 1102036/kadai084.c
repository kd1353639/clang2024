#include<stdio.h>
main()
{
	int i, j;

	while (1) {
		printf("整数1(-999で終了)？");
		scanf("%d", &i);
		if (i == -999) {
			break;
		}
		printf("整数2(-999で終了)？");
		scanf("%d", &j);
		if (j == -999) {
			break;
		}
		if (j == 0) {
			continue;
		}
		printf("%d / %d = %d あまり %d\n", i, j, i / j, i % j);

	}
}