#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{	
	int i, j, k;
	
	srand(time(0));
	rand();
	i = rand() % 100 + 1;
	printf("数当てゲーム\n");
	printf("1〜100までの数をより少ない回数で当てよう\n\n");
	k = 0;
	while (1) {
		printf("数(1〜100)を入力:");
		scanf("%d", &j);
		k++;
		if (j < i) {
			printf("%dより大きいです\n\n", j);
		}
		else {
			printf("%dより小さいです\n\n", j);
		}
		if (j == i) {
			printf("当たり！ %d 回で当てました\n", k);
			break;
		}
	}
	
}