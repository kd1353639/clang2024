#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("変換結果は:%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("変換結果は:%c", a - 0x20);
		}
		else {
			printf("変換結果は:%c",a);
		}
	}
}