#include<stdio.h>
main()
{
	int a, b;
	printf("整数1？");
	scanf("%d", &a);
	printf("整数2？");
	scanf("%d",	&b);
	if (a > b) {
		printf("%d の方が %d より %d 大きい\n", a, b, a - b);
	}
	if (a == b) {
		printf("%d と %d は等しい\n", a, b);
	}
	if (a < b) {
		printf("%d の方が %d より %d 小さい\n", a, b, b - a);
	}
}