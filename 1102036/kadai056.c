#include<stdio.h>
main()
{
	char a;
	printf("アルファベット小文字？");
	scanf("%c", &a);
	a += 1;
	for (; a <= 'z'; a++) {
		printf("%2c", a);
	}
}