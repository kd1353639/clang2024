#include<stdio.h>
main()
{
	int a, b, c, d;
	printf("������3����:\n");
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	printf("���v= %d  ����= %.2f \n", a + b + c, (float)d / 3);
}