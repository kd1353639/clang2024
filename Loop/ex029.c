#include<stdio.h>
main()
{
	int no,i;
	printf("数を入れて");
	scanf("%d", &no);

	i = 0;
	while (i < no) {
		printf("*");
		i++;
	}
}