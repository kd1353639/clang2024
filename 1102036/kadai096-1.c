#include<stdio.h>
main()
{
	int i, j, k;
	int c[10];
	k = 0;
	for (j = 0; j < 10; j++) {
		printf("����(-999�ŏI��)");
		scanf("%d", &c[j]);
		k++;
		if (c[j] == -999) {
			break;
		}
	}
	printf("�z��c =");
	for (j = 0; j < k - 1; j++) {
		printf(" %d ", c[j]);
	}
}