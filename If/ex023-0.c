#include<stdio.h>
main()
{
	int h, m, s;
	printf("秒数を入力\n");
	scanf("%d", &s);

	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		printf("%d", s);
	}
	else {
		printf("エラー");
	}
}