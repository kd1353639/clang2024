#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{	
	int i, j, k;
	
	srand(time(0));
	rand();
	i = rand() % 100 + 1;
	printf("�����ăQ�[��\n");
	printf("1�`100�܂ł̐�����菭�Ȃ��񐔂œ��Ă悤\n\n");
	k = 0;
	while (1) {
		printf("��(1�`100)�����:");
		scanf("%d", &j);
		k++;
		if (j < i) {
			printf("%d���傫���ł�\n\n", j);
		}
		else {
			printf("%d��菬�����ł�\n\n", j);
		}
		if (j == i) {
			printf("������I %d ��œ��Ă܂���\n", k);
			break;
		}
	}
	
}