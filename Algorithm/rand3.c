#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k;
	srand(time(0));
	rand();

	k = rand() % 101;
	if (k <= 30) {
		printf("かいしんのいちげき！\n");
	}
	else {
		printf("通常攻撃\n");
	}
}