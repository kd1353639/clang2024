#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &a);
	a += 1;
	for (; a <= 'z'; a++) {
		printf("%2c", a);
	}
}