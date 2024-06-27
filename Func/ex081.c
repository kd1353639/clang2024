#include<stdio.h>
int saidai(int* p, int number);
int saisyo(int* p, int number);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l = %d\n", saidai(data, 8));
	printf("Å¬’l = %d\n", saisyo(data, 8));
}

int saidai(int* p, int number)
{
	int dai, i = 0;
	for (dai = *p, i = 1; i < number; i++) {
		if (dai < *(p + i)) {
			dai = *(p + i);
		}
	}
	return dai;
}

int saisyo(int* p, int number)
{
	int syo, i = 0;
	for (syo = *p, i = 1; i < number; i++) {
		if (syo > *(p + i)) {
			syo = *(p + i);
		}
	}
	return syo;
}