#include<stdio.h>
main()
{
	int i, j;
	char a;

	printf("回数と文字列を入力 ");
	scanf("%d%s", &i, &a);
	for (j = 0; j < i; j++) {
		printf("%s\t", &a);
	}
}
