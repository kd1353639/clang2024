#include<stdio.h>
main()
{
	int i, j, k;
	k = 1;
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 20; i++){
			printf("%3d ", k);
			k++;
		}
		printf("\n");
	}
}