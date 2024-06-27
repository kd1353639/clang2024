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
	printf("****���݂̏��****\n");
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralusis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�₯��\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("��Ԉُ�Ȃ�\n");
	}
}

void changFlag(UNIT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ�t�^���܂���?\n");
		printf("1:��  2:����  3:���  4:�Ώ�  5:�U����  6:�U����  0:�I��>");
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
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:��  2:����  3:���  4:�Ώ�  5:�U����  6:�U����  0:�I��>");
		scanf("%d", &a);
	}
}