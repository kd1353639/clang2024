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
	struct profile data[5] = { {"A氏",2000,2,11,"A"},
		{"B氏",1999,12,31,"O"},{"C氏",1999,2,25,"AB"},
		{"D氏",2000,3,1,"A"},{"E氏",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i, j, k;
	printf("何で検索しますか？(1：生まれ年 2：生まれ月 3：血液型)");
	scanf("%d", &j);
	if (j == 1) {
		printf("生まれ年を入力＞");
		scanf("%d", &k);
	}
	if (j == 2) {
		printf("生まれ月を入力＞");
		scanf("%d", &k);
	}
	if (j == 3) {
		printf("血液型を入力＞");
		scanf("%s", &k);
	}
	for (i = 0; i < 5; i++) {
		if (j == 1) {
			if ((p + i)->data.tuki == k) {
				printf("%s ーーー %d 年 %d 月 %d 日生 血液型ー %s型\n",
					(p + i)->name, (p + i)->data.nen, (p + i)->data.tuki, (p + i)->data.hi, (p + i)->blood);
			}
		}
	}
}