#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int a, b, i;
	a = data[0];
	printf("�ő�l = ");
	for (i = 0; i < 10; i++) {
		if (a < data[i]) {
			a = data[i];
		}
	}
	printf("%d", a);
	b = data[0];
	printf("�ŏ��l = ");
	for (i = 0; i < 10; i++) {
		if (b > data[i]) {
			b = data[i];
		}
	}
	printf("%d", b);
}