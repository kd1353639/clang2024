#include<stdio.h>
main()
{
	int a,b;
	printf("0����100�܂ł̐����H");
	scanf("%d", &a);
	if (a < 30) {
		b = 1;
	}
	if (a >= 30 && a < 50) {
		b = 2;
	}
	if (a >= 50 && a < 80) {
		b = 3;
	}
	if (a >= 80 && a < 90) {
		b = 4;
	}
	if (a >= 90) {
		b = 5;
	}
	printf("���̐��l�̔��茋�ʂ́u%d�v�ł�\n", b);
}