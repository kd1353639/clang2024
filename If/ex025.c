#include<stdio.h>
main()
{
	char c;

	printf("���������:");
	scanf("%c", &c);

	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}