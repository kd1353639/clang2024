#include<stdio.h>
void keisan(int x, int y, int* sum, float* ave);
main()
{
	int a, b, c;
	float d;
	printf("������2���́F");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("���v�� %d�A���ς� %.2f", c,d);
}

void keisan(int x, int y,int *sum,float *ave)
{
	*sum = x + y;
	*ave = (x + y) / 2.0;
	return;
}