#include<stdio.h>
main()
{
	int i, no;
	i = 1;
	no = 0;

	for (i = 1; i <= 10; i++) {
		no += i;
		printf("1����%d�܂ł̘a = %d\n", i, no);
	}
}