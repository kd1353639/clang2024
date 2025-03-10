#include<stdio.h>
#define Sol_Num 3

typedef struct {
	char wname[20];
	int bullet;
	float atk;
}weapon;
typedef struct {
	char name[20];
	int hp;
	weapon wpn;
}Soldier;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sols[Sol_Num];
	SetInfo(sols, "file04.txt");
	Display(sols);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopen(filename, "r")) {
		for (int i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("ファイルが読めません\n");
	}
}
void Display(Soldier* s) {
	for (int i = 0; i < Sol_Num; i++) {
		printf("名前：%s 体力：%d\n", (s+i).name, (s+i).hp);
		printf("武器：%s 残弾数：%d 攻撃力：%.2f\n", (s + i).wpn.wname, (s + i).wpn.bullet, (s + i).wpn.atk);
	}
}