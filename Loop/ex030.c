#include<stdio.h>
main()
{
	int su, i;
	printf("数を入れて\n");
	scanf("%d", &su);

	i = 0;
	while (i <= 10) {
		printf("%d+%d=%d\n", su, i, su + i);
		i++;
	}
}