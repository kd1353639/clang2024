#include<stdio.h>
main()
{
	float a, b, c;
	printf("�P�ڂ̎���:");
	scanf("%f", &a);
	printf("�Q�ڂ̎���:");
	scanf("%f", &b);
	printf("�R�ڂ̎���:");
	scanf("%f", &c);
	float d;
	d = a + b + c;
	printf("���v = %.2f ���� = %.2f \n", a + b + c, d / 3);
}