#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d�l��(���O)�F", i + 1);
		scanf("%s", &data[i].name);
		printf("%d�l��(���N����)�F", i + 1);
		scanf("%d%d%d", &data[i].birth[0], &data[i].birth[1], &data[i].birth[2]);
		printf("%d�l��(���t�^)�F", i + 1);
		scanf("%s", &data[i].blood);
	}
	for (i = 0; i < 5; i++) {
		if (strcmp(data[i].blood, "A") == 0) {
			printf("%s �[�[�[ %d �N %d �� %d ���� ���t�^�[ %s�^\n", 
				data[i].name, data[i].birth[0], data[i].birth[1], data[i].birth[2], data[i].blood);

		}
	}
}