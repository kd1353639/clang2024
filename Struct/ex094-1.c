#include<stdio.h>
#include<string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day data;
	char blood[5];
};

main()
{
	struct profile data[5] = { {"A��",2000,2,11,"A"},
		{"B��",1999,12,31,"O"},{"C��",1999,2,25,"AB"},
		{"D��",2000,3,1,"A"},{"E��",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i, j, k;
	printf("���Ō������܂����H(1�F���܂�N 2�F���܂ꌎ 3�F���t�^)");
	scanf("%d", &j);
	if (j == 1) {
		printf("���܂�N����́�");
		scanf("%d", &k);
	}
	if (j == 2) {
		printf("���܂ꌎ����́�");
		scanf("%d", &k);
	}
	if (j == 3) {
		printf("���t�^����́�");
		scanf("%s", &k);
	}
	for (i = 0; i < 5; i++) {
		if (j == 1) {
			if ((p + i)->data.tuki == k) {
				printf("%s �[�[�[ %d �N %d �� %d ���� ���t�^�[ %s�^\n",
					(p + i)->name, (p + i)->data.nen, (p + i)->data.tuki, (p + i)->data.hi, (p + i)->blood);
			}
		}
	}
}