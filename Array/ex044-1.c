#include<stdio.h>
main()
{
	char data1[80], data2[80];
	int i;

	printf("������P�����:");
	scanf("%s", &data1);

	printf("������Q�����:");
	scanf("%s", &data2);

	printf("moji1=%s\tmoji2=%s", &data1[0], &data2[0]);
	printf("\n����ւ����\n");

	printf("moji1=%s\tmoji2=%s", &data2[0], &data1[0]);
}