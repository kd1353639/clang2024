#include<stdio.h>
void hantei(int x, int y, int z, int *max, int *min);
main()
{
	int a, b, c, d, e;
	printf("®”‚ð3‚Â“ü—ÍF");
	scanf(" %d%d%d", &a, &b, &c);
	hantei(a, b, c, &d, &e);
	printf("Å‘å’l = %d Å¬’l = %d\n", d, e);
}

void hantei(int x, int y, int z, int *max, int *min)
{
	*max = x;
	if (y > *max) {
		*max = y;
	}
	if (z > *max) {
		*max = z;
	}
	*min = x;
	if (y < *min) {
		*min = y;
	}
	if (z < *min) {
		*min = z;
	}
	return;
}