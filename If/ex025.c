#include<stdio.h>
main()
{
	char c;

	printf("文字を入力:");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
		printf("アルファベットです\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("数字です\n");
		}
		else {
			printf("その他の文字です\n");
		}
	}
}