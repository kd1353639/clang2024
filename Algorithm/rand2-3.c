#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c;
	srand(time(0));
	rand();

	c = rand() % 301 - 100;
	printf("��������������%d�ł�\n", c);
}