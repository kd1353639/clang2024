#include<stdio.h>
main()
{
	char moji1[80], moji2[80], w[80];
	int i;

	printf("文字列１を入力する：");
	scanf("%s", &moji1[0]);

	printf("文字列2を入力する：");
	scanf("%s", &moji2[0]);

	printf("mohi1 = %s\tmoji2 = %s\n", &moji1[0], &moji2[0]);
	printf("入れ替えると\n");

	for (i = 0; w[i] = moji1[i]; i++);		//文字列コピー
	for (i = 0; moji1[i] = moji2[i]; i++);	//文字列コピー
	for (i = 0; moji2[i] = w[i]; i++);		//文字列コピー
	//入れ替え
	//|w   =   moji1	|
	//|moji1 = moji2	|
	//|moji2   =   w	|

	printf("moji1 = %s\tmoji2 = %s\n", &moji1[0], &moji2[0]);
}