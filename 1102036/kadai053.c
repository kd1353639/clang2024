#include<stdio.h>
main()
{
	int su, i;
	printf("��������:");
	scanf("%d", &su);

	
	for (i = 0; i <= 10; i++) {
		printf("%3d",su + i);
	}
}