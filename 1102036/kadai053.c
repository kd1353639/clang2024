#include<stdio.h>
main()
{
	int su, i;
	printf("数を入れて:");
	scanf("%d", &su);

	
	for (i = 0; i <= 10; i++) {
		printf("%3d",su + i);
	}
}