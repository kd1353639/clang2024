#include<stdio.h>
main()
{
	int i=0,j,k;
	int c[10];
	printf("整数(-999で終了)？");
	scanf("%d", &j);
	c[i] = j;
	i++;
	while (j != -999) {
		printf("整数(-999で終了)？");
		scanf("%d", &j);
		c[i] = j;
		i++;
	}
	printf("配列c =");
	for (k = 0; k < i-1; k++) {
		printf(" %d", c[k]);
	}
}