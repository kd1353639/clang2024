#include<stdio.h>
main()
{
	int i, j, sum = 0;
	int ave = 0;
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("配列a =");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		sum += a[i];
	}
	ave = sum / 10;
	printf("\n合計 = %d   平均 = %d", sum,ave);
	
	printf("\n配列b =");
	sum = 0;
	for (j = 0; j < 10; j++) {
		printf(" %d", b[j]);
		sum += b[j];
	}
	ave = sum / 10;
	printf("\n合計 = %d   平均 = %d", sum, ave);
}