#include<stdio.h>
main()
{
	int i;
	char j;
	printf("10進数の整数？");
	scanf("%d", &i);
	printf("アルファベット(o or h or d)");
	scanf("%*c%c", &j);

	switch (j) {
	case'o':
	case'O':printf("%o", i);
		break;
	case'h':
	case'H':printf("%x", i);
		break;
	default:printf("%d",i);
	}
}