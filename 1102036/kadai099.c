#include<stdio.h>
main()
{
	int i, j;
	char a;

	printf("�񐔂ƕ��������� ");
	scanf("%d%s", &i, &a);
	for (j = 0; j < i; j++) {
		printf("%s\t", &a);
	}
}
