#include<stdio.h>
main()
{
	char moji1[80], moji2[80], w[80];
	int i;

	printf("������P����͂���F");
	scanf("%s", &moji1[0]);

	printf("������2����͂���F");
	scanf("%s", &moji2[0]);

	printf("mohi1 = %s\tmoji2 = %s\n", &moji1[0], &moji2[0]);
	printf("����ւ����\n");

	for (i = 0; w[i] = moji1[i]; i++);		//������R�s�[
	for (i = 0; moji1[i] = moji2[i]; i++);	//������R�s�[
	for (i = 0; moji2[i] = w[i]; i++);		//������R�s�[
	//����ւ�
	//|w   =   moji1	|
	//|moji1 = moji2	|
	//|moji2   =   w	|

	printf("moji1 = %s\tmoji2 = %s\n", &moji1[0], &moji2[0]);
}