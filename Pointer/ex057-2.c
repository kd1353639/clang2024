#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, i;
	
	printf("1—ñ–Ú‚Ì‚Ý•\Ž¦\n");

		for (i = 0; i < 3; i++) {
			p_tbl = &tbl[i][1];
			printf("%d ", *p_tbl++);
		}

}