#include<stdio.h>
void hantei(int x, int y, int z, int *max, int *min);
main()
{
	int a, b, c, d, e;
	printf("整数を3つ入力：");
	scanf(" %d%d%d", &a, &b, &c);
	hantei(a, b, c, &d, &e);
	printf("最大値 = %d 最小値 = %d\n", d, e);
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