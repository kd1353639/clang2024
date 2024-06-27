#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("変換すると:%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("変換すると:%c", a - 0x20);
		}
		else {
			printf("アルファベットを入力してください");
		}
	}
}