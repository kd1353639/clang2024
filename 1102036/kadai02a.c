#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l�H");
	scanf("%lf%lf", &a, &b);
	printf("������ %lf �� %lf �̎l�����Z������\n", a, b);
	printf("�a = %lf �� = %lf �� = %lf �� = %lf\n", a + b, a - b, a * b, a / b);
}