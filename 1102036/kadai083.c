#include<stdio.h>
main()
{
	int i;

	for (i = 1; ; i++) {
		if (i > 20) {
			break;
		}
		if (i % 2 == 1) {
			continue;
		}
		printf(" %d", i - 1);
	}
}