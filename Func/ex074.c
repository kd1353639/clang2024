#include<stdio.h>
void display1(int n1);		//�v���g�^�C�v�錾�̕ϐ����͂Ȃ��Ă��ǂ�
void display2(int* n2);
main()
{
	int a, b;
	printf("���la ?:");
	scanf(" %d", &a);
	display1(a);
	printf("a = %d\n\n", a);
	printf("���l ?:");
	scanf(" %d", &b);
	display2(&b);
	printf("b = %d\n\n", b);
}

void display1(int n)
{
	printf("���la�́A%d�ł��B\n", n);
	n += 10;
	return;
}

void display2(int* n)
{
	printf("���lb�́A%d�ł��B\n", *n);
	*n += 10;
	return;
}