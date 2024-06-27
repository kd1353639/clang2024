#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 }, i, j, w;
	printf("ソート前:");
	for (i = 0; i < N; i++) {
		printf(" %d ", d[i]);
	}
	printf("\n");
	for (i = 0; i < N; i++) {
		for (j = i + 1; j <	N; j++) {
			if (d[i] > d[j]) {	//昇順ソート
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後:");
	for (i = 0; i < N; i++) {
		printf(" %d ", d[i]);
	}
}