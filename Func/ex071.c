#include<stdio.h>
int gokei(int,int,int);
float heikin(int,int,int);
main()
{
	int a, b, c;
	printf("整数を3つ入力：");
	scanf("%d%d%d" ,&a, &b, &c);
	printf("合計は %d, 平均は %.2f", gokei(a, b, c), heikin(a, b, c));
}

int gokei(int a, int b, int c)
{
	return a + b + c;
}

float heikin(int a, int b, int c)
{
	return (float)gokei(a, b, c) / 3;
}