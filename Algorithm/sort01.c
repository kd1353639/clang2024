#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 }, i, j, w;
	printf("�\�[�g�O:");
	for (i = 0; i < N; i++) {
		printf(" %d ", d[i]);
	}
	printf("\n");
	for (i = 0; i < N; i++) {
		for (j = i + 1; j <	N; j++) {
			if (d[i] > d[j]) {	//�����\�[�g
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("�\�[�g��:");
	for (i = 0; i < N; i++) {
		printf(" %d ", d[i]);
	}
}