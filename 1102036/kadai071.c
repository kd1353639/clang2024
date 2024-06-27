#include<stdio.h>
main()
{
	int a, i, j;
	char k;
	
	printf("整数1？");
	scanf("%d", &i);
	printf("整数2？");
	scanf("%d", &j);
	printf("演算子？");
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
	case'%':printf("%d % %d = %dあまり%d\n", i, j, i / j, i % j);
		break;
	}
}