#include<stdio.h>
main()
{
	char data1[80], data2[80];
	int i;

	printf("文字列１を入力:");
	scanf("%s", &data1);

	printf("文字列２を入力:");
	scanf("%s", &data2);

	printf("moji1=%s\tmoji2=%s", &data1[0], &data2[0]);
	printf("\n入れ替えると\n");

	printf("moji1=%s\tmoji2=%s", &data2[0], &data1[0]);
}