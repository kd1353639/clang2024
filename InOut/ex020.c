#include<stdio.h>
main()
{
	char a;
	printf("小文字を入力:");
	scanf("%c", &a);
	printf("大文字に変換して: %c", a-0x20);
}