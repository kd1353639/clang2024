#include<stdio.h>
main()
{
	int a,i;
	a = 32;
	for (i = 0; i < 95; i++) {
		printf("%x %c  ", a+i, (char)a+i);
	}
}