#include<stdio.h>
main()
{
	char a;
	printf("���������:");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("�ϊ����ʂ�:%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("�ϊ����ʂ�:%c", a - 0x20);
		}
		else {
			printf("�ϊ����ʂ�:%c",a);
		}
	}
}