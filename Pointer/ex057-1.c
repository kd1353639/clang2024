#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i, j;
	
	p_tbl = tbl[1];
	printf("1行目のみ表示\n");

		for (i = 0; i < 3; i++) {
			printf("%d ", *p_tbl++);
		}

}