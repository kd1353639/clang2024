#include<stdio.h>
main()
{
	int i=0,j,k;
	int c[10];
	printf("Ž(-999ĹIš)H");
	scanf("%d", &j);
	c[i] = j;
	i++;
	while (j != -999) {
		printf("Ž(-999ĹIš)H");
		scanf("%d", &j);
		c[i] = j;
		i++;
	}
	printf("zńc =");
	for (k = 0; k < i-1; k++) {
		printf(" %d", c[k]);
	}
}