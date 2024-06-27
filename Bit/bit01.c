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
	printf("****Œ»Ý‚Ìó‘Ô****\n");
	if (s & Sleep)
	{
		printf("–°‚è\n");
	}
	if (s & Paralusis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‚â‚¯‚Ç\n");
	}
	if (s & AtkUp)
	{
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & AtkDown)
	{
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base)
	{
		printf("ó‘ÔˆÙí‚È‚µ\n");
	}
}

void changFlag(UNIT* s)
{
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚ð•t—^‚µ‚Ü‚·‚©?\n");
		printf("1:“Å  2:‡–°  3:–ƒáƒ  4:‰Î  5:UŒ‚ª  6:UŒ‚«  0:I—¹>");
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
		printf("‚Ç‚Ìó‘Ô‚ð‰ðœ‚µ‚Ü‚·‚©?\n");
		printf("1:“Å  2:‡–°  3:–ƒáƒ  4:‰Î  5:UŒ‚ª  6:UŒ‚«  0:I—¹>");
		scanf("%d", &a);
	}
}