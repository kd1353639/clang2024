#include<stdio.h>
enum Bitsrate
{
	Base = 0;
	Poison = 1 << 0;
	Sleep = 1 << 1;
	Paralusis = 1 << 2;
	Burn = 1 << 3;
	AtkUp = 1 << 4;
	AtkDown = 1 << 5;
};
typedef unsigned int UNIT;

void DisplayStatus(UNIT s);

void ChangFlag(UNIT* s);

void ClearFlag(UNIT* s);


main()
{
	UNIT MyState = Base;
	ChangFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayState(UNIT s)
{
	printf("****現在の状態****\n");
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & Paralusis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("やけど\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("状態異常なし\n");
	}
}

void changFlag(UNIT* s)
{
	int a;
	while (1)
	{
		printf("どの状態を付与しますか?\n");
		printf("1:毒  2:睡眠  3:麻痺  4:火傷  5:攻撃↑  6:攻撃↓  0:終了>");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralusis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UNIT* s)
{
	int a;
	while (a)
	{
		DisplayStatus(*s);
		printf("どの状態を解除しますか?\n");
		printf("1:毒  2:睡眠  3:麻痺  4:火傷  5:攻撃↑  6:攻撃↓  0:終了>");
		scanf("%d", &a);
	}
}