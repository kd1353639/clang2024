#include<stdio.h>
main()
{
	int a, i, j;
	char k;
	
	printf("����1�H");
	scanf("%d", &i);
	printf("����2�H");
	scanf("%d", &j);
	printf("���Z�q�H");
	scanf("%*c%c", &k);

	switch (k) {
	case'+':printf("%d + %d = %d\n", i, j, i + j);
		break;
	case'-':printf("%d - %d = %d\n", i, j, i - j);
		break;
	case'*':printf("%d * %d = %d\n", i, j, i * j);
		break;
	case'/':printf("%d / %d = %d\n", i, j, i / j);
		break;
	case'%':printf("%d % %d = %d���܂�%d\n", i, j, i / j, i % j);
		break;
	}
}